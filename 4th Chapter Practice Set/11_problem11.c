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
        int i = 2;
        while (i < n)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }

            i++;
        }
    }
    if (isPrime)
        printf("prime");
    else
        printf("Nonprime");

    return 0;
}