#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void signalhandler(int signum);

int main()
{
  signal(SIGINT,signalhandler);
  for(int i=0;i<100;i++) {

    printf("HEllO....\n");
    if(i==25)
    {
      raise(SIGINT);
      }
    }
  
  return 0;

}

void signalhandler(int signum)
{
  if(signum==SIGINT){
    printf("received SIGINT by signalhandler\n");
    exit(0);
  }
  else{
    printf("received \"%d\" signal by signalhandler\n",signum);
    return;
  }
}
