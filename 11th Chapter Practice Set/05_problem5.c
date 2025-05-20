#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 8;
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        ptr[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }
    printf("\n\n\n");
    ptr = (int *)realloc(ptr, 15 * sizeof(int));

    for (int i = 0; i < 15; i++)
    {
        ptr[i] = n * (i + 1);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}