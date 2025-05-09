#include <stdio.h>

int main()
{
    int a;
    printf("Enter your Marks   :   ");
    scanf("%d", &a);

    if (a >= 90 && a <= 100)
    {
        printf("Congratulations, you got A grade");
    }
    else if (a >= 80 && a < 90)
    {
        printf("Congratulations, you got B grade");
    }
    else if (a >= 70 && a < 80)
    {
        printf("Congratulations, you got C grade");
    }
    else if (a >= 60 && a < 70)
    {
        printf("Congratulations, you got D grade");
    }
    else if (a >= 50 && a < 60)
    {
        printf("Congratulations, you got E grade");
    }
    else if (a >= 0 && a < 50)
    {
        printf("Sorry, you got F grade");
    }
    else
    {
        printf("You entered a wrong number, try again...");
    }

    return 0;
}
