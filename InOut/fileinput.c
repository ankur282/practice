#include<stdio.h>

char ch;

FILE *fp,*fr;

int wrd=0,chr=0;
int main(){
  if(fp =fopen("file.txt","w")){
    printf("PRESS ctrl+d for EOF\n");
    printf("Enter text:");
    while((ch=getchar()) != EOF){
      if(ch==' ')
      {
        ++wrd;
      }
      else{
          chr++;
          }
    fputc(ch,fp);
    }
    fclose(fp);
    printf("\nThe word in file is: %d\n",wrd);
    printf("\nThe char in file is: %d\n",chr);
    }
    return 0;

}
