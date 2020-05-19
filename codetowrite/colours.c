#include <stdio.h>

enum colour {RED, GREEN, YELLOW};

void printColour(enum colour col) {
  switch(col) {
    case RED: printf("RED\n"); break;
    case GREEN: printf("GREEN\n"); break;
    case YELLOW: printf("YELLOW\n"); break;
  }
}

int main(void) {
  enum colour col = YELLOW;
  printColour(col);
  return 0;
}
