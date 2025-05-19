#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int randomNumber = (rand() % 100) + 1;
    int guessedNumber;
    int No_of_Guessed = 0;
    printf("Enter your Number   :   ");
    do
    {
        scanf("%d", &guessedNumber);
        if (guessedNumber > randomNumber)
        {
            printf("Enter a Lower Number    :   ");
        }
        else if (randomNumber > guessedNumber)
        {
            printf("Enter a higher Number   :   ");
        }
        else
        {
            printf("Congratulations! ");
        }
        No_of_Guessed++;
    } while (randomNumber != guessedNumber);
    printf("You successfully guessed in %d times.", No_of_Guessed);
    return 0;
}
