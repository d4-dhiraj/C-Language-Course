#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 7;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 4;
    ptr[1] = 8;
    ptr[2] = 12;
    ptr[3] = 4;
    ptr[4] = 8;
    ptr[5] = 12;
    printf("%d\n", ptr[0]);
    ptr = (int *)realloc(ptr, (2 * n) * sizeof(int));
    printf("%d\n", ptr[0]);

    return 0;
}