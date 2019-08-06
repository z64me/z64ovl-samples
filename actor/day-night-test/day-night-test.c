/**
 * day-night-test.c
 *
 * A simple actor that displays a different model depending on if it's day or night.
 *
 * by Dr.Disco <z64.me>
 *
 **/

#include <z64ovl/oot/debug.h>

// Actor Information
#define OBJ_ID         23           // primary object dependency (change if needed)

#define DL_DAY         0x06000710   // display list used during the day
#define DL_NIGHT       0x06000250   // display list used during the night

typedef struct {
	z64_actor_t actor;
} entity_t;

static void init(entity_t *en, z64_global_t *global)
{
	actor_set_scale( &en->actor, 0.01f );
}

static void play(entity_t *en, z64_global_t *global)
{
}

static void dest(entity_t *en, z64_global_t *global)
{
}
  
static void draw(entity_t *en, z64_global_t *global)
{
	uint32_t *x = (uint32_t*) GLOBAL_IS_NIGHT;
	uint32_t dl[] = { DL_DAY, DL_NIGHT };
	draw_dlist_opa( global, dl[*x] );
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
	.dest = dest,
	.main = play,
	.draw = draw
};
