#include <stdio.h>

struct vector
{
    int i;
    int j;
};
// we can chenge struct vector in a short form using typedef
struct vector sumVector(struct vector v1, struct vector v2);

int main()
{
    struct vector v1 = {1, 2};
    struct vector v2 = {2, 3};
    struct vector v3 = sumVector(v1, v2);
    printf("The value of sum of vectors is %di + %dj", v3.i, v3.j);
    return 0;
}

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}