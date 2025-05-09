// https://www.ascii-code.com/

#include <stdio.h>

int main()
{
    char a;
    printf("Enter your character    :   ");
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
        printf("Uppercase");
    else if (a >= 97 && a <= 122)
        printf("Lowercase");
    else
        printf("This is not a alphabet");
    return 0;
}