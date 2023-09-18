#include <stdio.h>
//#define MAX 15


int my_function(int x);
int main() {
   #ifdef MAX
   #define min 10
    printf("Hello world:%d",min);
   #else
   printf("Hello world\n");
   my_function(5);
   
   #endif
    
  
    

    return 0;
}

int my_function(int x)
{
    printf("This value:%d from %s and line no.:%d \nDate:\"%s\" and Time:\"%s\" from file:\"%s\" \n",x,__func__,__LINE__,__DATE__,__TIME__,__FILE__);
}
