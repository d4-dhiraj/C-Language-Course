#include <stdio.h>
int main()
{
    char gender;
    printf("Enter your Gender : "); // M for male and F for female
    scanf("%c", &gender);
    printf("OK Noted, Your gender is : %c\n", gender);
    return 0;
}