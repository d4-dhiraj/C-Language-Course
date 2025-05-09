#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4
    // 4 5 5
    // Both are correct different compilers gave different outputs
    return 0;
}