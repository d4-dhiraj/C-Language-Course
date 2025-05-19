#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("integers.txt", "r");
    // int num;
    // fscanf(ptr, "%d", &num);
    // printf("%d\n", num);
    // fscanf(ptr, "%d", &num);
    // printf("%d\n", num);
    // fscanf(ptr, "%d", &num);
    // printf("%d", num);
    // return 0;
    int num1, num2, num3;
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);
    fclose(ptr);
}