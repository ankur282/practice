/*
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdlib.h>
struct mesg_buffer {
	long mesg_type;
	char mesg_text[100];
} message;

int main()
{
  FILE *fp=NULL;

  fp=fopen("out.txt","w");

	key_t key;
	int msgid;

	key = ftok("progfile",65);
	msgid = msgget(key, 0666 | IPC_CREAT);
  msgrcv(msgid,&message,sizeof(message),1,0);
	printf("Data Received is : %s \n",message.mesg_text);
  //fputs(message.mesg_text,fp);
  //fclose(fp);
	msgctl(msgid, IPC_RMID, NULL);
	return 0;
}
*/


#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdlib.h>
#include <string.h>

struct mesg_buffer {
  long mesg_type;
  char mesg_text[100];
} message;

int main()
{
  FILE *fp = NULL;
  fp = fopen("out.txt", "w");
  if (fp == NULL) {
    perror("fopen");
    return 1;
  }

  key_t key;
  int msgid;

  key = ftok("progfile", 65);
  msgid = msgget(key, 0666 | IPC_CREAT);

  if (msgid == -1) {
    perror("msgget");
    return 1;
  }

  // Receive messages in a loop until there are no more messages
  while (msgrcv(msgid, &message, sizeof(message), 1, IPC_NOWAIT) != -1) {
    printf("Data Received is : %s\n", message.mesg_text);
    fputs(message.mesg_text, fp);
  }

  fclose(fp);

  // Destroy the message queue
  msgctl(msgid, IPC_RMID, NULL);

  return 0;
}

