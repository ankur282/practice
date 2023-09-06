#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main() {
   
    
    char str[20],src[20],dest[20];
    
    printf("Enter a string:");
    scanf("%s",str);
    printf("Your string: %s\n",str);
    
    int len = strlen(str);
    printf("Reverse string:");
    for(int i=len-1; i >=0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\nEnter string 1: ");
    scanf("%s",src);
    printf("Enter string 2: ");
    scanf("%s",dest);
    
    bool result = strcmp(src,dest);
    if(result==0)
    printf("string is same\n");
    else
    printf("string is not same\n");
    
    printf("The concat string is:%s ",strncat(src,dest,strlen(dest)));
    
    return 0;
}
