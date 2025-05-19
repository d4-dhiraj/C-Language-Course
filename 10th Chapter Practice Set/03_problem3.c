#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr2 = fopen("file2.txt", "a");
    ptr = fopen("file1.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        else
        {

            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }
    return 0;
}