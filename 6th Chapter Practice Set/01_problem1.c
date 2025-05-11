#include <stdio.h>

int main()
{
    int x = 5;
    int *y = &x;
    printf("The address of x is %p\n", &x); // if we want address in number then use %u at place of %p
    printf("The value at address of x is %d\n", *(&x));
    return 0;
}