#include <stdio.h>

int main()
{
    char x = 'D';
    char *y = &x; // y is a pointer pointing to x (y is a character pointer)

    float z = 5.232;
    float *a = &z;
    printf("The address of i is %p\n", &x);
    printf("The address of i is %p\n", y);
    printf("The address of i is %p\n", &y);

    printf("The value at address j is %d\n", *(&x));

    return 0;
}