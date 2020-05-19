#include <stdio.h>

int main(void) {
   printf("a char is %ld byte\n", sizeof(char));
   printf("a short is %ld bytes and its equivalent type is short int\n", sizeof(short));
   printf("a short int is %ld bytes\n", sizeof(short int));
   printf("a signed short int is %ld bytes and its equivalent type is short int\n", sizeof(signed short int));
   printf("unsigned short int is %ld bytes\n", sizeof(unsigned short int));
   printf("unsigned short is %ld bytes and its equivalent type is unsigned short int\n", sizeof(unsigned short));
   printf("an int is %ld bytes\n", sizeof(int));
   printf("a signed is %ld bytes\n", sizeof(signed));
   printf("a signed int is %ld bytes\n", sizeof(signed int));
   printf("a long is %ld bytes\n", sizeof(long));
   printf("a unsigned long is %ld bytes\n", sizeof(unsigned long));
   printf("a float is %ld bytes\n", sizeof(float));
   printf("a double is %ld bytes\n", sizeof(double));
   printf("a long long is %ld bytes\n", sizeof(long long));
   printf("a long double is %ld bytes\n", sizeof(long double));
     
   return 0;
}
