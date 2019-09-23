/**
 * snake_osd.c
 *
 * A basic Snake implementation.
 *
 * by Dr.Disco <z64.me>
 *
 * Controls
 * - In a map containing this actor, press D-Pad up to
 *   start a game of Snake.
 * - Then use the D-Pad to control the snake.
 * - Press L at any time to end the game.
 **/

#include <z64ovl/oot/debug.h>
#include <z64ovl/oot/helpers.h>
#include "assets.h"

/* actor info */
#define OBJ_ID         1   /* 1 indicates no object dependency */

/* width and height of playing field */
#define FIELD_W        10
#define FIELD_H        7

struct coord8 {
	unsigned
		  x:4
		, y:4
	;
};

/* snake game entity structure */
typedef struct {
	z64_actor_t actor;
	uint16_t timer;
	uint16_t rand;
	char enabled;
	char direction;
	char seg_count;
	char speed;
	struct coord8 seg[FIELD_W * FIELD_H];
	struct coord8 food;
} entity_t;

enum direction {
	SNAKE_UP,
	SNAKE_DOWN,
	SNAKE_LEFT,
	SNAKE_RIGHT
};

/* return 1 if snake collides with food, 0 otherwise */
static
char snake_food_collision(entity_t *en)
{
	int i;
	
	for(i=0; i < en->seg_count; ++i)
		if(en->seg[i].x == en->food.x && en->seg[i].y == en->food.y)
			return 1;
	
	return 0;
}

/* spawn food, and assure it doesn't overlap with the snake */
static
void snake_food_spawn(entity_t *en)
{
	while(snake_food_collision(en))
	{
		en->rand += 1024;
		en->food.x = math_rand_s16_offset(1000 + en->rand, 0) % FIELD_W;
		en->food.y = math_rand_s16_offset(1000 + en->rand, 0) % FIELD_H;
	}
}

/* initialize the snake game */
static
void snake_initialize(entity_t *en)
{
	/* place snake sprite at center and initialize food */
	en->seg[0].x = FIELD_W >> 1;
	en->seg[0].y = FIELD_H >> 1;
	snake_food_spawn(en);
	
	en->seg_count = 1;            /* snake begins 1 segment long   */
	en->direction = SNAKE_RIGHT;  /* traveling to the right        */
	en->speed = 4;                /* start speed slow; 1 = fastest */
	en->rand = 0;                 /* initialize random seed        */
}

/* this function is called when a lose condition is met */
static
void snake_death(entity_t *en)
{
	/* more stuff could be done on snake_death(), but
	 * for now, just go straight to snake_initialize()
	 * to restart the game
	 */
	snake_initialize(en);
}

/* move the snake along and test collisions */
static
void snake_update(entity_t *en)
{
	struct coord8 *head = en->seg;
	
	int i;
	char ate = snake_food_collision(en);
	
	/* prepare lengthening of snake if it ate */
	if(ate)
	{
		/* snake length is maxed out, so restart game */
		if(en->seg_count+1 >= FIELD_W * FIELD_H)
		{
			snake_death(en);
			return;
		}
		en->seg[en->seg_count] = en->seg[en->seg_count-1];
	}
	
	/* move each segment along */
	for(i = en->seg_count-1; i; --i)
		en->seg[i] = en->seg[i-1];
	
	/* snake ate food, so finalize lengthening and spawn new food */
	if(ate)
	{
		en->seg_count++;
		snake_food_spawn(en);
	}
	
	/* update head position */
	switch(en->direction)
	{
		case SNAKE_UP:
			/* test upper edge of screen */
			if(!head->y)
			{
				snake_death(en);
				return;
			}
			head->y--;
			break;
		
		case SNAKE_DOWN:
			/* test lower edge of screen */
			if(head->y >= FIELD_H - 1)
			{
				snake_death(en);
				return;
			}
			head->y++;
			break;
		
		case SNAKE_LEFT:
			/* test left edge of screen */
			if(!head->x)
			{
				snake_death(en);
				return;
			}
			head->x--;
			break;
		
		case SNAKE_RIGHT:
			/* test right edge of screen */
			if(head->x >= FIELD_W - 1)
			{
				snake_death(en);
				return;
			}
			head->x++;
			break;
	}
	
	/* test if snake collides with itself */
	for(i=1; i < en->seg_count; i++)
		if(head->x == en->seg[i].x && head->y == en->seg[i].y)
			snake_death(en);
}

static
void init(entity_t *en, z64_global_t *global)
{
	/* initialize internal entity components */
	en->enabled = 0;
	en->timer = 0;
	
	snake_initialize(en);
	
	/* on first run, initialize food manually */
	en->food.x = 2;
	en->food.y = 2;
}

static
void play(entity_t *en, z64_global_t *global)
{
	z64_button_t input = global->common.controller[0].pressEdge.button;
	
	/* L button ends the game */
	if( en->enabled && (input & INPUT_L_TRIGGER) ) {
		en->enabled = 0;
		unsigned char *x = (unsigned char*)INTERFACE_TOGGLE;
		*x = 0x00;
		return;
	}
	
	/* D-Pad up enables the game */
	else if( !en->enabled && (input & INPUT_D_UP) ) {
		unsigned char *x = (unsigned char*)INTERFACE_TOGGLE;
		*x = 0x01;
		en->enabled = 1;
	}
	
	/* exit this function if snake game isn't activated */
	if(!en->enabled)
		return;
	
	/* test input and update snake's direction likewise */
	if(input & INPUT_D_LEFT && ( en->direction != INPUT_D_RIGHT ) )
		en->direction = SNAKE_LEFT;
	else if(input & INPUT_D_RIGHT && ( en->direction != INPUT_D_LEFT ) )
		en->direction = SNAKE_RIGHT;
	if(input & INPUT_D_UP && ( en->direction != INPUT_D_DOWN ) )
		en->direction = SNAKE_UP;
	else if(input & INPUT_D_DOWN && ( en->direction != SNAKE_UP ) )
		en->direction = SNAKE_DOWN;
	
	/* update timer and random seed */
	en->timer++;
	en->rand++;
	
	/* once enough frames have elapsed, move the snake along */
	if(!(en->timer % en->speed))
		snake_update(en);
}

static
void draw(entity_t *en, z64_global_t *global)
{
	/* exit this function if snake game isn't activated */
	if(!en->enabled)
		return;
	
	gfx_texture_t texture =
	{
		.timg = (long unsigned int)&asset_gibdo,
		.width = 16,
		.height = 16,
		.fmt = G_IM_FMT_RGBA,
		.bitsiz = G_IM_SIZ_16b
	};
	
	/* animate Gibdo (snake) sprite */
	texture.timg += 512 * ( (en->timer & 3) >= 2 );

	gfx_screen_tile_t tile =
	{
		.origin_anchor = G_TX_ANCHOR_U | G_TX_ANCHOR_L,
		.width = 32,
		.height = 32
	};

	/* draw snake and food */
	#define OVERLAY ZQDL(global, overlay)
	int i;
	for(i=0; i < en->seg_count + 1; ++i) /* +1 for drawing food */
	{
		tile.x = 32 * en->seg[i].x;
		tile.y = 32 * en->seg[i].y;
		
		/* special test case for drawing food */
		if(i == en->seg_count) {
			texture.timg = (long unsigned int)&asset_food;
			tile.x = 32 * en->food.x;
			tile.y = 32 * en->food.y;
		}
		draw_ui_sprite(&OVERLAY, &texture, &tile);
	}
}

const z64_actor_init_t init_vars = {
	.number = 0xDEAD, .padding = 0xBEEF, /* magic zzromtool values */
	.type = 0x06, /* type = stage prop */
	.room = 0x00,
	.flags = 0x00000020,
	.object = OBJ_ID,
	.instance_size = sizeof(entity_t),
	.init = init,
	.dest = (void *)0x00000000,
	.main = play,
	.draw = draw
};
