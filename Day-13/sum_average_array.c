#include <stdio.h>
int main()
{
  int arr[100], n, i;
  int sum = 0;
  float avg;
  printf("Enter number of elements:");
  scanf("%d", &n);
  printf("Enter array elements:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  avg = (float)sum / n;

  printf("sum = %d\n", sum);
  printf("avg = %.2f", avg);

  return 0;
}