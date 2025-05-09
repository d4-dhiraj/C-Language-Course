#include <stdio.h>
int sum(int n);
int main()
{
    int a;
    printf("Enter your number   :   ");
    scanf("%d", &a);
    printf("%d", sum(a));
    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}