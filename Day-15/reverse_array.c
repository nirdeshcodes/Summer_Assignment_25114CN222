#include <stdio.h>
int main()
{
  int arr[100], n, i, temp;
  printf("Enter size of array:");
  scanf("%d", &n);
  printf("Enter array elements:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
  printf("Reverse array:");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
  return 0;
}