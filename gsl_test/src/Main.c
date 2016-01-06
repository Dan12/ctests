#include <stdio.h>
#include "../include/GSLFuncs.h"
#include "../include/PNGFuncs.h"

int main(void){
  
  mmMult();
  
  read_png_file("assets/test.png");
  process_png_file();
  
  printf("Program Now Finished\n");
  
  return 0;
}