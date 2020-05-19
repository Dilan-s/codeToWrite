
#define NDEBUG
#include <assert.h>
#include <stdlib.h>
void someFunction(int *output);

int main (void){
  int *intPtr =NULL;
  someFunction(intPtr);
  return 0;
}

void someFunction(int *output){
  assert (output != NULL);
  *output = 42;
}
