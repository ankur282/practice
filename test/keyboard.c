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
    msgid = msgget(1234, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }

    printf("Enter data(press 'exit' for exit):\n");

    while (1) {
        fgets(message.mtext,SIZE, stdin);

        if (strncmp(message.mtext,"exit", 4) == 0) {
            break;
        }
         message.mtype = 1;

        if (msgsnd(msgid, &message, sizeof(message), 0) == -1) {
            perror("msgsnd");
            exit(1);
        }
    }

    msgctl(msgid, IPC_RMID, NULL);

    return 0;
}

