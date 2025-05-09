#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number   :   ");
    scanf("%d", &n);
    int factorial = 1;
    int i = n;
    while (i > 0)
    {
        factorial *= i;
        i--;
    }

    printf("%d", factorial);
    return 0;
}