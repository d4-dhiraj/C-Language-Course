#include <stdio.h>
int multiply(int, int);
int main()
{
    printf("The multiplication is %d \n", multiply(67, 97));
    return 0;
}
int multiply(int x, int y)
{
    return x * y;
}