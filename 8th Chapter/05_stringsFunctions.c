#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Dhiraj";
    char surname[] = "Maurya";
    printf("%d\n", strlen(name)); // strlen does not include null.
    char target[10];
    strcpy(target, name); // This can copy to source and paste to target
    printf("%s\n%s\n", name, target);
    strcat(name, surname); // now name contains DhirajMaurya
    printf("%s\n", name);

    int a = strcmp("dhiraj", "maurya"); // d > m in ascii table so -ve value
    printf("%d\n", a);

    int b = strcmp("hello", "boy"); // h < b in ascii table so +ve value
    printf("%d\n", b);
    // if both are same then we got 0.
    return 0;
}