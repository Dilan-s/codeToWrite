#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printSizeArray(char array[]);
void printSizePtr(char *ptr);

int main(void) {
  char buffer[100];
  printf("sizeof(buffer) = %ld\n", sizeof(buffer));
  printSizeArray(buffer);
  printSizePtr(buffer);
  return 0;
}

void printSizeArray(char array[100]) {
  printf("sizeof(array) = %ld\n", sizeof(array));
}

void printSizePtr(char *ptr) {
  printf("sizeof(ptr) = %ld\n", sizeof(ptr));

}

