// print n natutal numbers where n is input from user
#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter your number   :   ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}