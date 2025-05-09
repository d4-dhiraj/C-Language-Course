#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
        printf("prime");
    else
        printf("Nonprime");

    return 0;
}
