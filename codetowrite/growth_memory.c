#include <stdio.h>

void fill(int i, int arr[][2]) {
 
  for(int row=0;row<i;++row){
    for(int col=0;col<2;++col){
      arr[row][col] = row*2 +col;
      printf("the value in [%d][%d] is %d and the address is %p \n", row,col,arr[row][col],(void *)&arr[row][col]);
      }
  }
  
}

int main (void){
  int q =5;
  int r =12;
  int array[3][2];
  printf("the value of q is %d and the address is %p \n",q, (void *)&q);
  printf("the value of r is %d and the address of r is %p\n",r, (void *)&r);
  fill(3,array);
  return 0;
}
 
