#include <stdio.h>

int main()
{
    char name[6] = {'D', 'H', 'I', 'R', 'A', 'J'};
    char surname[] = {'M', 'A', 'U', 'R', 'Y', 'A'};
    for (int i = 0; i < 6; i++)
    {
        printf("%c", name[i]);
    }
    printf(" ");
    for (int i = 0; i < 6; i++)
    {
        printf("%c", surname[i]);
    }

    return 0;
}