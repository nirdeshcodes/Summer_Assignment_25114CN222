#include <stdio.h>
int main()
{
  int n, lastdigit,rev=0;
  printf("Enter a number:");
  scanf("%d", &n);
  while (n > 0)
  {
    lastdigit = n % 10;
    rev=(rev*10)+lastdigit;
    n = n / 10;
  }
  printf("Reverse of the digit is %d", rev);
  return 0;
}