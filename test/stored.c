#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>


int main()
{
  char msg[1000];
  int msgid;


    msgid = msgget(65, 0666);

    while(1)
    {
    msgrcv(msgid, &msg, sizeof(msg),1, 0);

    printf("message Received: %s \n",msg);
    }
    msgctl(msgid, IPC_RMID, NULL);
	return 0;
}

