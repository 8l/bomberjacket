#ifndef BLIT_H
#define BLIT_H
#include <stdint.h>

#define uint unsigned int

int blit_vector32(int h, int w, int dy, int dx, Cell* bytes_c);
//int blit_vector32(uint32_t* pixels, uint sx, uint sy, uint pitch, uint w, uint h, uint dx, uint dy);
//int blit_vector1(void* pixels, uint sx, uint sy, uint pitch, uint w, uint h, uint dx, uint dy, uint color);
int blit_vector1(uint32_t color, uint dy, uint dx, uint h, uint w, uint pitch, uint sy, uint sx, uint8_t* pixels);
int blit_vector1_invert(uint32_t color, uint dy, uint dx, uint h, uint w, uint pitch, uint sy, uint sx, uint8_t* pixels);
int blit_string1(uint32_t color, int h, int w, int y, int x, int cursor_pos, Cell* str_c, Cell* font);

void init_blitter(uint32_t* fb);

#endif
