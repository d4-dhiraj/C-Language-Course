#include <stdio.h>

int main()
{
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // represents a new line
    printf("Hey I am good \nnice\n");
    printf("Hey I am good \tnice\n");   // to get spaces like a tab
    printf("Hey I am good \"nice\"\n"); // to add "" in output
    printf("Hey I am good \\n nice");
    return 0;
}