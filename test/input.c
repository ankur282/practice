#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX 1000
#include<string.h>


int main()
{
  char mesg[10000];
  int msgid;

    
    msgid = msgget(65, 0666 | IPC_CREAT);
    while(1)
    {
    printf("Writing message(Press 'exit' to exit):\n");
    fgets(mesg, MAX, stdin);

    if (strcmp(mesg,"exit\n") == 0) {
      break;
    }
    
    msgsnd(msgid,&mesg,sizeof(mesg),0);
    
    printf("message send.... \n");
    sleep(1);
    
    }
    msgctl(msgid, IPC_RMID, NULL);
	return 0;
}

