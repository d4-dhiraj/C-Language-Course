// while loop
// #include <stdio.h>

// int main()
// {

//     int sum = 0;
//     int i;
//     while (i <= 10)
//     {
//         sum += i;
//         i++;
//     }
//     printf("The sum of first 10 natural numbers is  :   %d", sum);
//     return 0;
// }

// do while loop
#include <stdio.h>

int main()
{

    int sum = 0;
    int i;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);

    printf("The sum of first 10 natural numbers is  :   %d", sum);
    return 0;
}