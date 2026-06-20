#include <stdio.h>
int Armstrong(int n); 

int Armstrong(int n)
{
  int original=n, sum = 0;
  
  while (n > 0)
  {
    int digit = n % 10;
    sum = sum + digit * digit * digit;
    n = n / 10;
  }
  if (sum == original)
    return 1;
  else
    return 0; 
}

int main()
{
  int n;
  printf("Enter any number:");
  scanf("%d", &n);
  if (Armstrong(n))
    printf("Armstrong number");
  else
    printf("Not an armstrong number");
  return 0; 
}