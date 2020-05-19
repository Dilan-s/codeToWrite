#include <stdio.h>

typedef enum { AMBIENT = 1, DIFFUSE = 2, SPECULAR =4} renderflag;

typedef enum { FALSE, TRUE} bool;

bool Is(renderflag f);

int main(void){

if(Is(AMBIENT)){
  printf("Ambient is set.\n");
}
if(Is(DIFFUSE)){
  printf("Diffuse is set.\n");
}
if(Is(SPECULAR)){
  printf("Specular is set.\n");
}
return 0;
}

bool Is(renderflag f){
 
 int flags = AMBIENT | SPECULAR;
 
 if(flags & f){
  return TRUE;
 }
  return FALSE;
  
}
