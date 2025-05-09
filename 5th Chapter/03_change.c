#include <stdio.h>
int change(int x);
int main()
{
    int a = 5;
    change(a); // remains same
    printf("a is %d", a);
    return 0;
}
int change(int x)
{
    x = x + 7;
    printf("a is %d\n", x);
    return 0;
}