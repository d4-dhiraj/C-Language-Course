// Same code because we are passing values by refrence.
#include <stdio.h>
void tentimes(int *);
int main()
{
    int a = 6;
    tentimes(&a);
    printf("%d", a);
    return 0;
}
void tentimes(int *a)
{
    *a = 10 * (*a);
}