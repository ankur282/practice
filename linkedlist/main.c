#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *ptr=NULL;

struct node *createnode(int data)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

int insert(int value)
{
    
    struct node *new=createnode(value);    
    return 0;
}

int display(struct node *nead)
{
     for (ptr = nead; ptr != NULL;ptr = ptr->next)
        { 
            printf("%d \t", ptr->data);
        }
    return 0;
}



int main() {
   
    printf("Hello world\n");
   
    start=createnode(6);
   // display(start);
   printf("The value of the node:%d \n",start->next);

    return 0;
}
