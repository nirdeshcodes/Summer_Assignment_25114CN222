#include <stdio.h>
int main()
{
  int n, lastdigit, rev = 0, original;
  printf("Enter a number:");
  scanf("%d", &n);
  original = n;
  while (n > 0)
  {
    lastdigit = n % 10;
    rev = (rev * 10) + lastdigit;
    n = n / 10;
  }

  if (original == rev)
    printf("The given number is palindrome");
  else
    printf("The given number is not palindrome");
  return 0;
}