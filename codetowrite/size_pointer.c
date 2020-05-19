#include<stdio.h>
#include <stdlib.h>


int main()
{
  int num = 15;
  int *ptr = NULL;
  ptr = &num;
  char arr[]="abcd";
  char *c="abcd";
  printf("Size of Pointer : %ld Bytes and value %d\n",sizeof(ptr), *ptr);
  printf("Size of array : %ld Bytes\n and says %s\n",sizeof(arr), arr);
  printf("Size of Pointer : %ld Bytes and says %s\n",sizeof(c), c);
 
  return 0;
}

