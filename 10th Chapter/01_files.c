#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);
    fclose(ptr);
    return 0;
}