#include<stdio.h>

char ch;

FILE *fp;
int main(){
  if(fp =fopen("file.txt","w")){
    printf("PRESS ctrl+d for EOF\n");
    printf("Enter text:");
    while((ch=getchar()) != EOF){
      fputc(ch,fp);
    }
    fclose(fp);
    }
    return 0;

}
