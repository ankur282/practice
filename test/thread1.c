#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
int a=0;
pthread_mutex_t thr1_mutex,thr2_mutex;


void *thr_fn1(void *arg)
{
  pthread_mutex_lock(&thr1_mutex);  
  printf("thread 1 acccuring 1 lock\n");
  sleep(1);
  char *mesg = (char*)arg;
    printf("Thrd1 executing:\n");
    printf("thread ID = %lu \n ",pthread_self());
    printf("%s \n",mesg);
  pthread_mutex_lock(&thr2_mutex);
  printf("thread 1 accuring 2 lock\n");
    for(int i=0;i<10;i++){
    a++;
    printf(" thread 1 value :%d \n",a);
    }
    pthread_mutex_unlock(&thr2_mutex);
    printf("thread 1 remove 2 lock\n");
    pthread_mutex_unlock(&thr1_mutex);
    return ((void*)1);

}

void *thr_fn2(void *arg)
{
  char *mesg = (char*)arg;
  pthread_mutex_lock(&thr2_mutex);
  printf("thread 2 accuring 2 lock\n");
  sleep(1);

    printf("Thrd2 exceuting:\n");
    printf("thread ID = %lu \n ",pthread_self());
    printf("%s \n",mesg);

    pthread_mutex_lock(&thr1_mutex);
    printf("thread 2 accuring 1 loack");

    for(int i=0;i<10;i++){
    a--;
    printf("thread 2 value :%d \n",a);
    }
  pthread_mutex_unlock(&thr1_mutex);
  printf("thread 2 remove 2 lock\n");
  pthread_mutex_unlock(&thr2_mutex);
  printf("thread 2 remove 1 lock\n");
    return ((void*)2);

}

int main()
{
  pthread_mutex_init(&thr1_mutex,NULL);
  pthread_mutex_init(&thr2_mutex,NULL);

    int err;
    pthread_t tid1,tid2;
    char *mesg1="this is ankur";
    char *mesg2="this is matariya";
    void *tret;

    pthread_create(&tid1,NULL,thr_fn1,(void*)mesg1);


    pthread_create(&tid2,NULL,thr_fn2,(void*)mesg2);

    pthread_join(tid1,&tret);
    printf("thread 1 exit code %d\n",(int)tret);

    pthread_join(tid2,&tret);
    printf("thread 2 exit code %d\n",(int)tret);
    printf("value of a is :%d \n",a);

    exit(0);

}

