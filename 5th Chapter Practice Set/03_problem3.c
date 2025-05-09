#include <stdio.h>
float force(float m);
int main()
{
    float m;
    printf("Enter mass in grams :   ");
    scanf("%f", &m);
    float F = force(m);
    printf("The Force exterted by earth is %.2f N", F);
    return 0;
}
float force(float m)
{
    return m * 9.8 / 1000;
}