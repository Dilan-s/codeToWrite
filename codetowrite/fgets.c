#include <stdio.h>

void getstr(char buf[], int size);

int main() {
  char buffer[100];
  fgets(buffer,sizeof(buffer),stdin);
 /* getstr(buffer,sizeof(buffer));*/
  fprintf (stdout, "From stdout: %s",buffer);
  fprintf (stderr, "From stderror: %s",buffer);
  
  return 0;
}

void getstr(char buf[], int size){
  fgets(buf, size, stdin);
  int i=0;
  while(buf[i] != '\0'){
    if(buf[i] == '\n'){
      buf[i] = '\0';
    }else{
      i++;
    }
  }
  
}