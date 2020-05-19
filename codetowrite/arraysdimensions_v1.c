#include <stdio.h>

void fill(int m[10][10]) {
 
  for(int row=0;row<10;row++){
    for(int col=0;col<10;col++){
      m[row][col]= row*col;
      printf("the value in [%d][%d] is %d\n", row,col,m[row][col]);
    }
  
}
  
}

int main (void){
  int array[5][3];
  fill(array);
  return 0;
}
 
