#include <stdio.h>

void fill(int i, int arr[][i]) {
 
  for(int row=0;row<i;++row){
    for(int col=0;col<i;++col){
      arr[row][col] = row*i +col;
      printf("the value in [%d][%d] is %d\n", row,col,arr[row][col]);
    }
  }
  
}

int main (void){
  int array[5][2];
  fill(2,array);
  return 0;
}
 
