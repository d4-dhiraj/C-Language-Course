#include <stdio.h>

int main()
{
    int n = 8;
    int sum = 0;
    int i;
    for (int i = 1; i <= 10; i++)
    {
        sum += n * i;
    }
    printf("The sum of 8th table's numbers is  :   %d", sum);
    return 0;
}