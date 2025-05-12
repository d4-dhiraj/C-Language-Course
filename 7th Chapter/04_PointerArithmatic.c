#include <stdio.h>

int main()
{
    int i = 7;
    int *a = &i;
    printf("The address of a is %d\n", a);
    a++;
    // new address incresed by 4 because integers takes 4 byte.
    // Note :- in other devices integer can takes more bytes.
    printf("The address of a is %d\n", a);

    char x = 'A';
    char *ptr = &x;
    printf("The address of x is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);

    return 0;
}