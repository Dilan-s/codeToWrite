#include <stdio.h>

void swap(int *a, int *b);

int main (void){
int a =3;
int b = 4;
printf("the initial values of a is %d and b is %i\n",a,b);
printf("the addresses of a is %p and b is %p before \n",&a,&b);
swap(&a,&b);
printf("after swap the value of a is %d and b is %d\n",a,b);
printf("the addresses of a is %p and b is %p after \n",&a,&b);
return 0;
}

void swap (int *a,int *b){
	printf("the addresses of a is %p and b is %p inside \n",a,b);
	int *temp = b;
	b = a;
	a = temp;
	printf("the addresses of a is %p and b is %p after \n",a,b);
	printf("inside the swap the value of a is %d and b is %d\n",*a,*b);
}
