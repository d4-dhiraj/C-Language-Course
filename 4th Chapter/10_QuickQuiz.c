// print n natutal numbers where n is input from user using for loop
#include <stdio.h>

int main()
{
    int n;
    printf("Enter your number   :   ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}