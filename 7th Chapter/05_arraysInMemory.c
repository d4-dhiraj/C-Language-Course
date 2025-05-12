#include <stdio.h>

int main()
{
    int marks[7];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks at index %d :   ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The address of marks at index %d is %d\n", i, &marks[i]);
    }
    return 0;
}