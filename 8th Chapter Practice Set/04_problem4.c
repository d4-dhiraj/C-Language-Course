#include <stdio.h>

char *slice(char str[], int m, int n)
{
    int i = 0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}
int main()
{
    char str[] = "Dhiraj Maurya";

    printf("%s", slice(str, 5, 10));
    return 0;
}