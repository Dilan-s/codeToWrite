#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>

void printBits(uint32_t x);

int main(void) {
  uint16_t i = 0x1e10;
  printBits(i);
  uint16_t mask = 0xff0;
  printBits(mask);
  i &= mask;
  printBits(i);
  i >>= 4;
  printBits(i);
  printf("%d\n", i);
  return 0;
}

void printBits(uint32_t x){
 uint32_t mask =1 << (sizeof(int) * CHAR_BIT-1);
for(int i=0; i<sizeof(int) * CHAR_BIT;i++){
 printf("%i", (x & mask) != 0 );
 x <<=1;
}
printf("\n");
}
