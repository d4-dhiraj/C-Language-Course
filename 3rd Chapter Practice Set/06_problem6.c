#include <stdio.h>

int main()
{
    int a = 4, b = 6, c = 8, d = 2;

    if (a >= b && a >= c && a >= d)
        printf("a is greatest among them");
    else if (b >= a && b >= c && b >= d)
        printf("b is greatest among them");
    else if (c >= a && c >= b && c >= d)
        printf("c is greatest among them");
    else
        printf("d is greatest among them");

    return 0;
}
