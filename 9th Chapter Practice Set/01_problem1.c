#include <stdio.h>

struct vector
{
    int i;
    int j;
};

int main()
{
    struct vector v1 = {1, 2};
    printf("The vector is %di + %dj", v1.i, v1.j);
    return 0;
}