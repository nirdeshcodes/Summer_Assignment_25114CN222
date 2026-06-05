#include <stdio.h>
int main()
{
  int n, original, lastdigit, sum = 0;
  printf("Enter a number:");
  scanf("%d", &n);
  original = n;
  while (n > 0)
  {
    lastdigit = n % 10;
    int factorial = 1;
    for (int i = 1; i <= lastdigit; i++)
    {
      factorial = factorial * i;
    }
    sum = sum + factorial;
    n = n / 10;
  }
  if (sum == original)
    printf("Strong Number");
  else
    printf("Not A Strong Number");

  return 0;
}