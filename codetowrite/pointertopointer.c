#include <stdio.h>
#include <stdlib.h>

int main(){
  char str1[]="is"; char str2[]="in";
  char *i[2];
  char* p1, *p2;
  p1= str1;
  p2 = str2;
  printf("The p1 is %s and p2 is %s\n",p1,p2);
  i[0] = (char *) &str1;//&str1[0];str1
  i[1] = str2;//(char *) &str2;
  char **ii = (char **)&i;
  printf("will print 'is': %s\n",i[0]);
  printf("will print 'in': %s\n",i[1]);
  printf("will print 'is': %s\n",ii[0]);
   printf("will print 'is': %s\n",ii[1]); 
  printf("will print 'is': %s\n",*ii);
  ii++;
  //printf("will print 'is': %s\n",ii[1]); 
  printf("will print 'in': %s\n",*ii);
  
  return 0;
}
