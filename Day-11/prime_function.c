#include <stdio.h>
int prime(int n); 

int prime(int n)
{
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i < n; i++)
    {
        if (n % i== 0)
            return 0;
    }
    return 1; 
}
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    if (prime(num))
        printf("prime number");
    else
        printf("Not a prime number");
    return 0;
}