#include <stdio.h>

int main()
{
    int num = 8;
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d\n", num * i);
    }

    return 0;
}