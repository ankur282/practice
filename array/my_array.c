#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main()
{
  int i=0,p=0;
  int primes[30]={0};
  bool isPrime = false;
  int index=2;

  primes[0]=2;
  primes[1]=3;

  for(p=5; p <= 100; p=p+2)  
  {
    isPrime=true;

    for(i=1; isPrime && p/primes[i] >= primes[i]; ++i)
    {
      if(p % primes[i]==0)
        isPrime=false;
    }

    if(isPrime==true)
    {
      primes[index]=p;
      ++index;

      }

  }



  for (int j=0;j < index;++j)
  {
     printf("%d ",primes[j]);
  }
  return 0;

}
