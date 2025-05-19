#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer;
    /*0-->snake
      1-->water
      2-->gun

    */
    computer = rand() % 3;
    printf("Enter 0 for snake, 1 for water, 2 for gun : ");
    scanf("%d", &player);
    // printf("\n%d", computer);
    if (player == 0 || player == 1 || player == 2)
    {
        if (player == 0)
        {
            printf("You Selected Snake.\n");
            if (computer == 0)
            {
                printf("Computer selected Snake.\n");
                printf("Its's Tie.\nPlease try again...");
            }
            else if (computer == 1)
            {
                printf("Computer Selected Water.");
                printf("Congratulations!! You Win.");
            }
            else if (computer == 2)
            {
                printf("Computer Selected Gun.\n");
                printf("Sorry!! You Lost.");
            }
        }
        if (player == 1)
        {
            printf("You Selected Water.\n");
            if (computer == 0)
            {
                printf("Computer selected Snake.\n");
                printf("Sorry!! You Lost.");
            }
            else if (computer == 1)
            {
                printf("Computer Selected Water.");
                printf("Its's Tie\n Please try again...");
            }
            else if (computer == 2)
            {
                printf("Computer Selected Gun.\n");
                printf("Congratulations!! You Win.");
            }
        }
        if (player == 2)
        {
            printf("You Selected Gun.\n");
            if (computer == 0)
            {
                printf("Computer selected Snake.\n");
                printf("Congratulations!! You Win.");
            }
            else if (computer == 1)
            {
                printf("Computer Selected Water.");
                printf("Sorry!! You Lost.");
            }
            else if (computer == 2)
            {
                printf("Computer Selected Gun.\n");
                printf("Its's Tie\n Please try again...");
            }
        }
    }
    else
    {
        printf("Wrong Input Please try again...");
    }
    return 0;
}