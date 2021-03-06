/**
 * assets.h
 *
 * Graphics used by snake_osd.c.
 **/

/* food.rgba5551, one 16x16 sprite */
const unsigned char asset_food[512] = {
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0xFF, 0xFF, 0x61, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0xFF, 0xFF,
	0xFF, 0xFF, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0xF9, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xC1, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1,
	0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0xF9, 0xC1, 0xFD, 0x11, 0xF9, 0xC1, 0xFD, 0x11, 0xF9, 0xC1, 0xFD, 0x11,
	0xF9, 0xC1, 0xF9, 0xC1, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0xFD, 0x11, 0xF9, 0xC1,
	0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1, 0xFD, 0x11,
	0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0xFD, 0x11, 0xF9, 0xC1, 0xFD, 0x11, 0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1,
	0xF9, 0xC1, 0xF9, 0xC1, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0xF9, 0xC1, 0xF9, 0xC1,
	0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1, 0xFD, 0x11, 0xF9, 0xC1,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0xF9, 0xC1, 0xFD, 0x11, 0xF9, 0xC1,
	0xFD, 0x11, 0xF9, 0xC1, 0xF9, 0xC1, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1, 0xF9, 0xC1,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0xFF, 0xFF,
	0xFF, 0xFF, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0xFF, 0xFF, 0xFF, 0xFF, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58,
	0xFF, 0xFF, 0xFF, 0xFF, 0x61, 0x58, 0xFF, 0xFF, 0x61, 0x58, 0x61, 0x58,
	0x61, 0x58, 0x61, 0x58, 0x61, 0x58, 0x61, 0x58
};

/* gibdo.rgba5551, two 16x16 frames */
unsigned char asset_gibdo[1024] = {
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0x6C, 0x7F, 0xFF, 0xFF, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0x00, 0x2F, 0x00, 0x2F,
	0x00, 0x2F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F,
	0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
	0x6C, 0x7F, 0x00, 0x2F, 0xFF, 0xFF, 0x00, 0x2F, 0xFF, 0xFF, 0x00, 0x2F,
	0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80, 0x6C, 0x7F, 0x00, 0x2F,
	0x00, 0x2F, 0x00, 0x2F, 0x00, 0x2F, 0x00, 0x2F, 0x6C, 0x7F, 0xFF, 0xFF,
	0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F,
	0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F,
	0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF,
	0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F,
	0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F,
	0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F,
	0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0x6C, 0x7F,
	0xFF, 0xFF, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80,
	0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0x00, 0x2F, 0x00, 0x2F, 0x00, 0x2F,
	0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF,
	0x00, 0x2F, 0xFF, 0xFF, 0x00, 0x2F, 0xFF, 0xFF, 0x00, 0x2F, 0x6C, 0x7F,
	0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x6C, 0x7F,
	0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF, 0x6C, 0x7F, 0x00, 0x2F, 0x00, 0x2F,
	0x00, 0x2F, 0x00, 0x2F, 0x00, 0x2F, 0x6C, 0x7F, 0xFF, 0x80, 0x6C, 0x7F,
	0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F,
	0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F,
	0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF,
	0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF,
	0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
	0xFF, 0x80, 0xFF, 0x80, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F, 0x6C, 0x7F,
	0x6C, 0x7F, 0xFF, 0x80
};
