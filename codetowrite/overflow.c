#include <stdio.h>
#include <limits.h>
#include<stdint.h>

void foo(signed int a) {

  printf("a+1:%d a: %d a-1:%d\n",a+1, a, a-1);
  
}

void foo_u(unsigned int a) {
 
  printf("unsigned a+1:%u a: %u a-1:%u\n",a+1, a, a-1);
  
}

int main() {
  
 uint32_t i = 4294967295;
  printf("%x\n",i);
  
  i = 0xFFFFFFE2;
  printf("%u\n",i);
  
  int32_t myInt;
  myInt = 0xFFFFFFE2;
  printf("%d\n",myInt);
  
  foo(1);
  foo(0x7fffffff);//foo(INT_MAX);
  foo(0x80000000);
    
  foo_u(0x7fffffff);
  foo_u(0x80000000);
  foo_u(UINT_MAX);
 
  
}
