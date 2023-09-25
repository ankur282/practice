#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *end=NULL;

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
    struct node *new=(struct node *)malloc(sizeof(struct node));
    new=createnode(value);
   if(start==NULL)
   {
       start=new;
       end=new;
   }
   else
   {
       end->next=new;
       end=new;
   }
    return 0;
}

int insertBetween(int value)
{
    struct node 
}



int display(struct node *head) {
    struct node *ptr = head;
 
    while (ptr != NULL) {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    
    return 0;
}


int main() {
   
    printf("Hello world\n");
   // start=createnode(6);
   insert(5);
   insert(10);insert(15);insert(116);
    
   display(start);
  // printf("The value of the node:%d \n ",start->next);

    return 0;
}
