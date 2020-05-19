#include <stdio.h>

void copystr(char *dest, char *src);

int main(){
  char a[] = "bye";
  char b[10]="hello";
  printf("Size of a before coying in main: %ld Bytes\n",sizeof(a));
  copystr(b,a);
  printf("This will print 'bye': %s\n",b);
  printf("Size of a after coying in main: %ld Bytes\n",sizeof(a));
   printf("Size of b after coying in main: %ld Bytes\n",sizeof(b));
  return 0;
}
void copystr(char dest[], char src[]){
  int i;
  printf("Size of a before copying: %ld Bytes\n",sizeof(src));
  printf("Size of b before copying: %ld Bytes\n",sizeof(dest));
  for (i=0; src[i] != '\0'; i++){
    dest[i] = src[i];
  }
  dest[i] = '\0';
  printf("Size of a after copying: %ld Bytes\n",sizeof(src));
  printf("Size of b after copying: %ld Bytes\n",sizeof(dest));
}
