#include <stdio.h>
int factorial(int x);
// n! = n x n-1 x ........x 4 x 3 x 2 x 1
//(n-1)! = (n-1) x .......x 4 x 3 x 2 x 1
// n! = n x (n-1)
int main()
{
    int a;
    printf("Enter your number   :   ");
    scanf("%d", &a);
    int c = factorial(a);
    printf(" The value of %d ! is %d", a, c);
    return 0;
}
int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}