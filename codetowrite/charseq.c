#include <stdio.h>

#define START_CHAR ' '
#define END_CHAR 'Z'

int main (void){
    
    for (int char_code = (int)START_CHAR; char_code <= END_CHAR; char_code++){
        printf("%c",(char)char_code);
    }
 
    return (0);
}
 
