#include <stdio.h>
int average(int x, int y, int z);
int main()
{
    int a = 4;
    int b = 6;
    int c = 8;
    average(a, b, c);
    average(1, 343, 4);
    return 0;
}
int average(int x, int y, int z)
{
    float avg = (x + y + z) / 3;
    printf("The average is %f\n", avg);
}