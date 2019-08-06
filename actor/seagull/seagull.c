/**
 * seagull.c
 *
 * A simple seagull actor that flies in circles/ellipses.
 *
 * by Dr.Disco <z64.me>
 *
 * variable structure (hex)
 * xyzz
 * x = elliptical factor (0x0 = circle,  0xF = really skinny ellipse)
 * y = speed-1           (0x0 = slowest, 0xF = fastest)
 * z = ((radius/64)-1)|(direction<<7) (max value is 0x7F, rolls over to minimum starting at 0x80)
 * z & 0x80 = direction (whether z is >= 0x80 controls clockwisedness)
 *
 * variable structure (binary)
 * xxxx yyyy w zzzzzzz
 * x = elliptical factor (0 = circle,  15 = really skinny ellipse)
 * y = speed-1           (0 = slowest, 15 = fastest)
 * w = clockwisedness
 * z = (radius/64)-1
 **/

#include <z64ovl/oot/debug.h>     // change to `u10.h` or similar to change build targets

// Actor Information
#define OBJ_ID         134        // primary object dependency (change if needed)

// Hierarchy
#define SKEL_BIRD      0x06000E68

// Animations
#define ANIM_GLIDE     0x06000058 // Gliding animation
#define ANIM_FLAP      0x06000168 // Flap wings

// Animation IDs
#define ANIM_GLIDE_ID  0
#define ANIM_FLAP_ID   1

// seagull entity structure
typedef struct {
	z64_actor_t actor;
	z64_skelanime_t skelanime;
	s16 angle, flap, anim, speed;
} entity_t;

/* .text */
static void init(entity_t *en, z64_global_t *global) {
	
	// initialize skeleton for drawing, with animation
	skelanime_init_mtx(
		global,
		&en->skelanime,
		SKEL_BIRD,
		ANIM_GLIDE,
		0, 0, 0
	);
	
	// scale actor's object model to 1/1000
	actor_set_scale(&en->actor, 0.01f);
	
	// initialize internal entity components
	en->angle = 0;
	en->flap = 100;
	en->anim = ANIM_GLIDE_ID;
	
	// clockwisedness flag in actor variable
	float clockwisedness = 1;
	if(en->actor.variable & 0x80)
		clockwisedness = -1;
	
	// tilt in direction of turn
	en->actor.rot_2.z = 15 * 182 * clockwisedness;
	
	// speed flag
	en->speed = clockwisedness * ( ( ( en->actor.variable >> 8 ) & 0xF ) + 1 ) * 182;
	
	// scale speed for larger radii
	en->speed /= ( (en->actor.variable & 0x7F) + 1 ) * 2;
}

static void play(entity_t *en, z64_global_t *global) {
	
	float length, x, z;
	
	// get radius
	length = ( (en->actor.variable & 0x7F) + 1 ) * 64;
	
	// calculate x and z (note that z uses elliptical scale factor)
	x = en->actor.pos_1.x + length * math_coss(en->angle);
	z = ( 16.0f - (en->actor.variable >> 12 ) ) / 16.0f;
	z *= en->actor.pos_1.z + length * math_sins(en->angle);
	
	// make seagull face the proper direction
	en->actor.rot_2.y = -en->angle;
	
	// turn it the other way (180 degrees) if it's going counterclockwise
	if( en->speed < 0 )
		en->actor.rot_2.y += 180 * 182;
	
	// set actor location in world
	en->actor.pos_2.x = x;
	en->actor.pos_2.z = z;
	en->actor.pos_3.x = x;
	en->actor.pos_3.z = z;
	en->angle += en->speed;
	
	// animation timer expired, alternate the animation
	if(!--en->flap) {
		u32 anim;
		if(en->anim == ANIM_GLIDE_ID) {
			anim = ANIM_FLAP;
			en->anim = ANIM_FLAP_ID;
			// play the wing flapping animation (20 frames) either 1, 2, or 3 times,
			// buffering 4 frames at the end to smoothly go back to gliding afterwards
			en->flap = 20 * math_rand_s16_offset(1, 3) + 4;
		} else {
			anim = ANIM_GLIDE;
			en->anim = ANIM_GLIDE_ID;
			// glide for a duration of 30 to 60 frames
			en->flap = math_rand_s16_offset(30, 30);
		}
		// immediately switch to the desired animation
		actor_anime_change(
			&en->skelanime, anim, 1.0,
			0, 0, 0, 0
		);
	}
}

static void draw(entity_t *en, z64_global_t *global) {
	
	// update the transformation matrices for each limb, based on the current animation frame
	actor_anime_frame_update_mtx(&en->skelanime);
	
	// draw a matrix-enabled skeleton
	skelanime_draw_mtx(
		global,
		en->skelanime.limb_index,
		en->skelanime.unk5,
		en->skelanime.dlist_count,
		0, 0,
		&en->actor
	);
}

/* .data */
const z64_actor_init_t init_vars = {
	.number = 0xDEAD, .padding = 0xBEEF, // <-- magic values, do not change
	.type = 0x06, // type = stage prop
	.room = 0x00,
	.flags = 0x00000010,
	.object = OBJ_ID,
	.instance_size = sizeof(entity_t),
	.init = init,
	.dest = (void *)0x00000000,
	.main = play,
	.draw = draw
};
