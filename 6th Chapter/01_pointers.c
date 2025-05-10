#include <stdio.h>

int main()
{
    int x = 4;
    int *y = &x; // y is a pointer pointing to x
    printf("the address of x is %p\n", &x);
    printf("the address of x is %p\n", y);
    printf("the address of y is %p\n", &y);
    printf("The value at address x is %d", *(&x));
    return 0;
}