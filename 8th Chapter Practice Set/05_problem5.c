#include <stdio.h>
void strcpy(char target[], char source[]);
int strlen(char source[]);
int main()
{
    char source[] = "Dhiraj";
    char target[20];
    strcpy(target, source); // target now contains "dhiraj"
    printf("%s %s", source, target);
    return 0;
}
void strcpy(char target[], char source[])
{
    for (int i = 0; i < strlen(source); i++)
    {
        target[i] = source[i];
    }
    target[strlen(source)] = '\0';
}
int strlen(char source[])
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
    }

    return i;
}