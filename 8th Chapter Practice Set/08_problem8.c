#include <stdio.h>
#include <string.h>
int main()
{
    char c = 't';
    char str[] = "Ifmmp\"!Uijt!jt!b!tfdsfu!nbttbhf/";
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}