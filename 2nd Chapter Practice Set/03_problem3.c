#include <stdio.h>

int main()
{
    // int a = 2342354;
    int a;
    printf("Enter you number     :  ");
    scanf("%d", &a);

    if (a % 97 == 0)
    {
        printf("It is divided by 97");
    }
    else
    {
        printf("It is not devided by 97");
    }
}