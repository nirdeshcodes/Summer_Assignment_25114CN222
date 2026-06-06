#include <stdio.h>
int main()
{
  int x, n, output = 1;
  printf("Enter base :");
  scanf("%d", &x);
  printf("Enter exponent:");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    output = output * x;
  }
  printf("%d", output);
  return 0;
}