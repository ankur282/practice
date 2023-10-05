#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#define SIZE 1000
#include<string.h>

FILE *fp=NULL; 
char buffer[SIZE];
int flag=0,flag2=0;


void *keyboardInput()
{ 
  while(1){
    //printf("press key from keyboard(enter 'exit' to quite): ");
    fgets(buffer,SIZE, stdin);
    if(strcmp(buffer, "exit\n") == 0){
      flag2=1;
      break;
    }
    flag=1;
}
return 0;
   
}

void *keystored()
{
  while(1){
        if(flag==1) {
            fputs(buffer,fp);
            flag = 0;   
         }
        if (flag2==1) {
            break;  
        }
      }
    return 0;

}


int main()
{
  fp=fopen("config.txt", "w");
  if(fp == NULL){
    perror("Error opening file");
    return 1;
    }
    
    pthread_t process1,process2;


    pthread_create(&process1,NULL,keyboardInput,NULL);
    pthread_create(&process2,NULL,keystored,NULL);

    pthread_join(process1,NULL);
    pthread_join(process2,NULL);

    fclose(fp);
    return 0;
}
