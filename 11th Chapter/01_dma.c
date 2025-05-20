#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    // int arr[n];//not allowed in C.
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 4;
    ptr[1] = 8;
    ptr[2] = 12;
    printf("%d", ptr[0]);

    return 0;
}