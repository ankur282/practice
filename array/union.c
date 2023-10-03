#include <stdio.h>
#include <string.h>
 
union Data {
  char str[50];
};
 
int main( ) {

   union Data data;        

   printf( "Memory size occupied by data : %ld\n", sizeof(data));

   return 0;
}
