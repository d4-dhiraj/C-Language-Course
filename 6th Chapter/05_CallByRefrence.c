#include <stdio.h>
int multiply(int *, int *);
int main()
{
    int x = 555;
    int y = 20; // Change the value of y to 10 and the mutiply
    printf("The multiply of this 2 numbers is %d\n", multiply(&x, &y));
    printf("The value of y is %d", y);
    return 0;
}
int multiply(int *x, int *y)
{
    *y = 10;
    return ((*x) * (*y));
}