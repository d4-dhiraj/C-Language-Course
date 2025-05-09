#include <stdio.h>
int sum(int x, int y);
int main()
{
    sum(4, 6);

    int a = 4, b = 72;
    // sum(a, b);

    int c = sum(a, b); // store the value
    printf("%d\n", c);
    return 0;
}
int sum(int x, int y)
{
    printf("The sum of numbers is  :    %d\n", x + y);
    return x + y;
}