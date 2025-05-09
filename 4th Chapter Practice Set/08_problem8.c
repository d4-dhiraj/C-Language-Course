#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number   :   ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = n; i > 0; i--)
    {
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}