#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("double.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    FILE *ptr2;
    ptr2 = fopen("double.txt", "w");
    fprintf(ptr2, "%d", 2 * (num));
    fclose(ptr2);
    return 0;
}