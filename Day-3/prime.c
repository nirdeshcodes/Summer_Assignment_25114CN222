#include <stdio.h>
int main()
{

  int n, sum=0;
  printf("Enter a number:");
  scanf("%d", &n);
  for (int i=1; i <= n; i++)
  {
    n = n % i;
  }
  if (n == 0)
  {
    sum++;
    printf("Prime number");
  }
  else
  {
    printf("Not Prime");
  }
  return 0;
}