#include <stdio.h>

int main()
{
    char name1[20];
    char name2[20];
    int sallery1;
    int sallery2;
    FILE *ptr;
    ptr = fopen("users.txt", "a");
    printf("Enter the name of 1st employee : \n");
    scanf("%s", &name1);
    printf("Enter the sallery of 1st Employee: \n");
    scanf("%d", &sallery1);

    printf("Enter the name of 2nd employee : \n");
    scanf("%s", &name2);
    printf("Enter the sallery of 2nd Employee: \n");
    scanf("%d", &sallery2);

    fprintf(ptr, "%s,", name1);
    fprintf(ptr, "%d\n", sallery1);

    fprintf(ptr, "%s,", name2);
    fprintf(ptr, "%d\n", sallery2);
    return 0;
}