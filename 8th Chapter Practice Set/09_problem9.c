#include <stdio.h>
#include <string.h>
int main()
{
    char c = 't';
    char str[] = "Ifmmp\"!Uijt!jt!b!tfdsfu!nbttbhf/";
    int contains = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
        else
        {
            contains = 0;
        }
    }
    if (contains == 1)
    {
        printf("Yes This string contanis %c", c);
    }
    else
    {
        printf("No This string does not contanis %c", c);
    }

    return 0;
}