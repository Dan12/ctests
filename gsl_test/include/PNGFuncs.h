#ifndef PNGFUNCS_H_INCLUDED
#define PNGFUNCS_H_INCLUDED
/* ^^ these are the include guards */

/* include libpng */
#include <png.h>

/* Prototypes for the functions */
void read_png_file(char *filename);
void write_png_file(char *filename);
void process_png_file();

/* Variables */
int width, height;
png_byte color_type;
png_byte bit_depth;
png_bytep *row_pointers;

#endif