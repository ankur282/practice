#include <stdio.h>
#include <math.h>

long long DecimalToBinary(int n);

int main() {
   int n = 0;
   long long result = 0;

   printf("Enter a decimal number: ");
   scanf("%d", &n);
   result = DecimalToBinary(n);
   printf("%d in decimal = %lld to binary\n", n , result);
   return 0;
}

long long DecimalToBinary(int n){
   long long binaryNumber = 0;
   int rem, i=1;

   while(n != 0) {
     rem = n%2;
     n = n / 2;
     binaryNumber += rem * i;
     i = i * 10;
   }

   return binaryNumber;

}

