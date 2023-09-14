#include<stdio.h>
#include<stdarg.h>

int addnumber(int n, ...);

int main()
{
  printf("variadic function\n");
  printf("Sum of the number 1 2 3 4 5 is: %d\n",addnumber(3, 15, 15, 15));
  return 0;

}

int addnumber(int n, ...)
{

  va_list number;
  va_start(number, n);
  int sum = 0;
  for(int i = 0; i < n; i++)
  {
    sum += va_arg(number, int);

  }
    va_end(number);

    return sum;
}
