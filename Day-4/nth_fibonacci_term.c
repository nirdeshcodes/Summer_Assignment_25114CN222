#include <stdio.h>

int main()
{
  int n, a = 0, b = 1, c;

  printf("Enter number of terms: ");
  scanf("%d", &n);
  if (n == 1)
  {
    printf("%d", a);
  }
  else if (n == 2)
  {
    printf("%d", b);
  }

  else
  {
    for (int i = 3; i <= n; i++)
    {

      c = a + b;
      a = b;
      b = c;
    }
    printf("The %dth fibonacci term is %d",n, c);
  }
  return 0;
}