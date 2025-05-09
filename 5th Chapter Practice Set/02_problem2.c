#include <stdio.h>
float converter(float c);
int main()
{
    float a = 32;
    converter(a);
    return 0;
}
float converter(float c)
{
    float f = (9 * c / 5) + 32;
    printf("Tempratur in fahrenheit %.2f", f);
    return ((9 * c) / 5) + 32;
}