#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define SIZE 1000
 struct msgbuf {
   long mtype;       /* message type, must be > 0 */
   char mtext[SIZE];    /* message data */
} message;


int main() {
    int msgid;
    FILE *fp;

    msgid = msgget(1234, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }

    fp = fopen("out.txt", "w");
    if (fp == NULL) {
        perror("fopen");
        exit(1);
    }

    printf("data receive:\n");

    while (1) {
        if (msgrcv(msgid, &message, sizeof(message), 1, 0) == -1) {
            exit(1);
        }

        fprintf(fp,"%s",message.mtext);
        printf("data: %s",message.mtext);
    }

    fclose(fp);
    msgctl(msgid, IPC_RMID, NULL);

    return 0;
}

