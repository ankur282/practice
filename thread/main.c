#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

void *PrintHello(void *threadid)
{
    printf("\n Hello WOrld:!\n");
    printf("I am waiting\n");
    
}

int main()
{
    pthread_t thread;
    printf("creating Thread\n");
    pthread_create(&thread,NULL,PrintHello,NULL);
    printf("\n Thread ID : %lu",thread);
    pthread_join(thread,NULL);

}
