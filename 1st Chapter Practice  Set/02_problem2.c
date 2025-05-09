#include <stdio.h>

int main()
{
    float r = 6;  // radius of circle
    float h = 10; // hight of cylinder
    printf("The area of circle with radius %f is %f\n", r, 3.14 * r * r);
    printf("The volume of cylinder with radius %f and height %d is %f", r, h, 3.14 * r * r * h);
    return 0;
}