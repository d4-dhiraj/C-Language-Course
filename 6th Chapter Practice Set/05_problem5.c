#include <stdio.h>

void calculate(int a, int b, int *sum, float *average);

int main()
{
    int num1 = 10, num2 = 20;
    int sum;
    float average;

    calculate(num1, num2, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

void calculate(int a, int b, int *sum, float *average)
{
    *sum = a + b;
    *average = (float)(*sum) / 2;
}
