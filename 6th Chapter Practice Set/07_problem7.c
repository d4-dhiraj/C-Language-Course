#include <stdio.h>
int tentimes(int);
int main()
{
    int x = 5;
    printf("Ten times of x is %d and value of x is %d", tentimes(x), x);
    return 0;
}
int tentimes(int x)
{
    x = 10 * x;
    return 10 * x;
}