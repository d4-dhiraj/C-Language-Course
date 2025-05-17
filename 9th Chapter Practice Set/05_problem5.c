#include <stdio.h>
typedef struct com
{
    int real;
    int imaginary;
} complex;
int main()
{
    complex c1 = {3, 4};
    printf("Complex number is %d + %di", c1.real, c1.imaginary);
    return 0;
}