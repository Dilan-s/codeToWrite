#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>

void printBits8(uint8_t x);

int main(){
  uint8_t y;
  uint32_t i = 0x1E100000;
  uint32_t mask = 0xFF00000;
  i = i & mask;
  i = i >> 20;
  printf("%d\n",i);
  y = (uint8_t)i;
  printf("%d\n",y);
  printBits8(y);
  return EXIT_SUCCESS;
}

void printBits8(uint8_t x){
  uint32_t mask =1 << (CHAR_BIT-1);
  for(int i=0; i<CHAR_BIT;i++){
  printf("%i", (x & mask) != 0 );
  x <<=1;
  }
  printf("\n");
}
