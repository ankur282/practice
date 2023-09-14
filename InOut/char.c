#include<stdio.h>

char ch;

FILE *fp;
int main()
{
  if(fp =fopen("sample.c","r")){
    while((ch=getc(fp)) != EOF){
      putchar(ch);
      }
      fclose(fp);
    }
    return 0;

}
