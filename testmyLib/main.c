#include<stdio.h>
#include "strfunc.h"

int main()
{
  char str[]="ankur matariya";
  printf("the string:%s\n",str);
  //scanf("%s",str);

  int result=lenOfStr(str);
  printf("The length of string:%d\n",result);
  return 0;


  }
