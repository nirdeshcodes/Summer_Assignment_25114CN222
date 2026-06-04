#include <stdio.h>

int main()
{
  int initial, end;

  printf("Enter initial and end: ");
  scanf("%d%d", &initial, &end);

  for (int i = initial; i <= end; i++)
  {
    int n = i;
    int sum = 0;
    int digit;

    while (n > 0)
    {
      digit = n % 10;
      sum = sum + digit * digit * digit;
      n = n / 10;
    }

    if (sum == i)
    {
      printf("%d ", i);
    }
  }

  return 0;
}