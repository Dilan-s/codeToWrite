#include <stdio.h>
#include<string.h>

int main(void) {
  char str[] = "%08x %08x %08x %08x %08x\n";
  printf ("%s\n",str);
  int i=0;
  printf("%p\n",&i);
  printf("%d\n",i);
}
