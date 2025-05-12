#include <stdio.h>

int main()
{
    int marks[40]; // it stores 40 integers
    marks[0] = 92;
    marks[1] = 46;
    marks[2] = 54;
    marks[3] = 78;
    marks[4] = 67;
    marks[5] = 88;
    // we can go till marks[39]
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }

    return 0;
}