#include <stdio.h>
int strlen(char str[]);
int main()
{
    char str[] = "Dhiraj";
    int count = strlen(str);
    printf("%d", count);
    return 0;
}
int strlen(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
    }

    return i;
}