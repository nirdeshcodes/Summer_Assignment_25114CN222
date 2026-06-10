#include <stdio.h>
int main()
{

  int n, sum = 0;
  printf("Enter a number:");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
      sum++;
  }
  if (sum == 2)

    printf("Prime number");

  else
  
    printf("Not Prime number");

  return 0;
}