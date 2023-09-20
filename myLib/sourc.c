#include<stdio.h>
#include "strfunc.h"

int copyOfStr(char *src, char *dest)
{
  int i=0;
  while(src[i]!='\0')
  {
    dest[i]=src[i];
    i++;
  }
    dest[i]='\0';
    return 0;
}

int lenOfStr(char *str)
{
  int i=0,len=0;
  while(str[i]!='\0')
  {
    len++;
    i++;
  }
  return len;
}

int noOfchInStr(char *str, char chforsearch)
{
  int i=0,freq=0;
  while(str[i]!='\0')
  {
    if(str[i]==chforsearch)
    freq++;
    i++;
  }
  return freq;
}
