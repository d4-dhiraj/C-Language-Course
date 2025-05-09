// //This is a sample i know this is wrong because we cannot use directly

// #include <stdio.h>

// int main()
// {
//     float income, tax = 0, final_amount;

//     printf("Enter your annual income: ");
//     scanf("%f", &income);

//     if (income <= 250000)
//     {
//         tax = 0;
//         final_amount = income;
//         printf("Your final amount is %.2f", final_amount);
//     }
//     else if (income > 250000 && income <= 500000)
//     {
//         tax = 5;
//         final_amount = income - (income * tax / 100);
//         printf("Your final amount is %.2f", final_amount);
//     }
//     else if (income > 500000 && income <= 1000000)
//     {
//         tax = 20;
//         final_amount = income - (income * tax / 100);
//         printf("Your final amount is %.2f", final_amount);
//     }
//     else
//     {
//         tax = 30;
//         final_amount = income - (income * tax / 100);
//         printf("Your final amount is %.2f", final_amount);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int income;
    float tax = 0;
    printf("Enter income: \n");
    scanf("%d", &income);
    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }
    else
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    printf("The total tax you need to pay is %.3f", tax);
    return 0;
}