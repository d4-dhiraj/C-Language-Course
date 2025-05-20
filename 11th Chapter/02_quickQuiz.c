#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float *ptr;
    // scanf("%d", &a);
    ptr = (int *)malloc(a * sizeof(float));
    ptr[0] = 7;
    ptr[1] = 9;
    ptr[2] = 13;
    ptr[3] = 43;
    ptr[4] = 6;
    printf("%.2f %.2f %.2f %.2f %.2f", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);
    return 0;
}