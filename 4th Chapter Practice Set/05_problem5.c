// for loop
#include <stdio.h>

int main()
{
    printf("The sum of first 10 natural numbers is  :   ");
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}