#include<stdio.h>
#include<unistd.h>

int main()
{
  int a=fork();
  int b=fork();
  if(b==0 && a ==0){
  printf("Hello this is 3 child::%d\n",getpid());
  }
  else if(b==0 && a > 0){
  printf("Hello this is 2 child::%d\n",getpid());
  }
  else if(b>0 && a==0){
  printf("Hello this is 1 child::%d\n",getpid());
  }
  else
    printf("Hello this is parent::%d\n",getpid());

}
