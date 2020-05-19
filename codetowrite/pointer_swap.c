#include <stdio.h>

void swap(int *a, int *b);

int main (void){
int a =3;
int b = 4;
printf("a: %i , b: %i\n",a,b);
swap(&a,&b);
printf("a: %d , b: %d\n",a,b);
return 0;
}

void swap (int *a,int *b){
int temp = *b;
*b = *a;
*a = temp;
}
