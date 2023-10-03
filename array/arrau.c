
#include<stdio.h>


int main()
{
 char a;
 long double i=5,array[5]={12,232,123,13,12};
  array[-1]=4;
  printf("%Lf  %p %p %p %Lf %p \n",array[-1],&array[0],&array[-1],&array[1],i,&i);
  printf("%d \n",sizeof(char));
  }

