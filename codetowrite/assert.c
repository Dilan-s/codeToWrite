#include <assert.h>
#include <stdio.h>

void doSomething(int i){
  assert(i>1);
}

int main(void){
  doSomething(1);
  printf("we don't reach this code. \n");
}
