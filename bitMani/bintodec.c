#include <stdio.h>
#include <math.h>

int BinaryToDecimal(long long n);

int main() {
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal\n", n,BinaryToDecimal(n));
    return 0;
}

int BinaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, rem;
    while (n!=0)    {
        rem = n%10;
        n /= 10;
        decimalNumber += rem*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
