#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>

void printBits(uint32_t x);

int main(void){
uint32_t i =33;
printf("In this platform the interegers are : %ld bits and the number to print is:%d \n",
       sizeof(int) *CHAR_BIT,i);
printBits(i);
return EXIT_SUCCESS;
}

void printBits(uint32_t x){
 uint32_t mask =1 << 31;
for(int i=0; i<32;i++){
 if((x & mask) == 0 ){
  printf("0");
 }
 else{
  printf("1");
 }
 x = x << 1; //x <<=1;
}
printf("\n");
}
