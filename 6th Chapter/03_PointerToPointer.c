#include <stdio.h>

int main()
{
    int x = 7;
    int *y = &x;
    int **z = &y;

    printf("The address of x is %p\n", &x);
    printf("The address of x is %p\n", y);
    printf("The address of y is %p\n", &y);
    printf("The address of y is %p\n", z);
    printf("The address of z is %p\n\n\n\n", &z);

    printf("The value at address of x is %d\n", x);
    printf("The value at address of x is %d\n", *(&x));
    printf("The value at address of x is %d\n", **(&y));
    printf("The value at address of y is %p\n", y);
    printf("The value at address of y is %p\n", *(&y));

    return 0;
}