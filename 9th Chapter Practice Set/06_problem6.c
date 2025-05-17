#include <stdio.h>
typedef struct com
{
    int real;
    int imaginary;
} complex;
void display(complex c1);
int main()
{
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part of number : ");
        scanf("%d", &carr[i].real);
        printf("Enter imaginary part of number : ");
        scanf("%d", &carr[i].imaginary);
        display(carr[i]);
    }

    return 0;
}
void display(complex c1)
{
    printf("Complex number is %d + %di\n", c1.real, c1.imaginary);
}