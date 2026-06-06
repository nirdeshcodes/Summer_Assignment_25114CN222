#include <stdio.h>
int main()
{
  int n;
  printf("Enter a binary number:");
  scanf("%d", &n);
  int lastdigit;
  int decimal=0;
  int i = 1;

  while (n > 0)
  {
    lastdigit = n % 10;
    decimal = decimal+lastdigit * i;
    i = i * 2;
    n = n / 10;
  }
  printf("%d", decimal);
}