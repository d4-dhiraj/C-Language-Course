#include <stdio.h>
int swap(int *, int *);
int main()
{
    int x = 6, y = 3;
    printf("Before swap x is %d and y is %d\n", x, y);
    swap(&x, &y);
    printf("After swap x is %d and y is %d\n", x, y);
    return 0;
}
int swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}