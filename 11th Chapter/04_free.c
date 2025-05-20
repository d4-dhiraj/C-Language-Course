#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n;
    float *ptr;
    scanf("%f", &n);
    ptr = (int *)malloc(n * sizeof(float));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    free(ptr);
    // after this ptr has been free.
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    return 0;
}