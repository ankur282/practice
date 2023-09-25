#include<stdio.h>
#include<unistd.h>

int main()
{
  int b=fork();
  if(b==0){
  printf("Hello this is child::%d\n",getpid());
  }
  else{
  printf("Hello this is parent::%d\n",getpid());
  }

}
