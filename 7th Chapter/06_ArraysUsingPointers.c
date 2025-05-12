#include <stdio.h>

int main()
{
    int marks[5] = {97, 79, 91, 96, 89};
    int *ptr = marks; // same as int *ptr = &marks[0]
    printf("%d", ptr);
    for (int i = 0; i < 5; i++)
    {
        // printf("The value of marks at index %d is %d\n", i, marks[i]);
        printf("The value of marks at index %d is %d\n", i, *ptr); // both are same
        *ptr++;
    }

    return 0;
}