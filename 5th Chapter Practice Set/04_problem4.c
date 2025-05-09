#include <stdio.h>
int febonacci(int n);
int main()
{
    int n;
    printf("Enter your number   :   ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", febonacci(i));
    }

    return 0;
}
int febonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return febonacci(n - 1) + febonacci(n - 2);
    }
}