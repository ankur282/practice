#include<stdio.h>
#include<stdlib.h>
#include "area.h"
int main(int argc, char *argv[])
{
  int noOfArgs = argc;
  char *arg1 = argv[0];
  int arg2 = atoi(argv[1]);
  int arg3 = atoi(argv[2]);

  printf("The number of arguments is:%i\n",noOfArgs);
  printf("The 1 argument is(File Name):%s\n",arg1);
  printf("The 2 argumnet is(Height):%i\n",arg2);
  printf("The 3 argumnet is(Width):%i\n",arg3);
  //int a=0,b=0;
  //printf("Enter the height and widht of rectanguler:\n");
  //scanf("%d %d",&a,&b);
  printf("The area of rectangle:%i\n",area(&arg2,&arg3));
  return 0;

}

