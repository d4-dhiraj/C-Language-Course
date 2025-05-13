#include <stdio.h>

int main()
{
    int arr[10];
    int a;
    printf("Enter your number : ");
    scanf("%d", &a);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = (i + 1) * a;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d is %d\n", a, i + 1, arr[i]);
    }
    return 0;
}