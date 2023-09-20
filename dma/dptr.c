#include <stdio.h>
#include<stdlib.h>


int newFunc(int **ptr){
    *ptr=(int *)malloc(sizeof(int));
    
}
int main() {  
  int a =5;

  int *p=NULL;
 
  
  newFunc(&p);
  *p=a;
  printf("The value:%d\n",*p);
  
  free(p);
    
}  
