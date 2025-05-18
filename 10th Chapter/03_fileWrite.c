#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "w");
    int num = 84;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}