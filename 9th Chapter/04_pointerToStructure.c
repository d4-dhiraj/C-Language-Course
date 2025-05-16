#include <stdio.h>

struct student
{
    int roll_no;
    float marks;
    char name[20];
};

int main()
{
    struct student s1;
    s1.roll_no = 13;
    struct student *ptr;
    ptr = &s1;
    // now we can print structure using pointer
    // printf("%d", (*ptr).roll_no);
    printf("%d", ptr->roll_no); // ptr->roll_no is same as (*ptr).roll_no
    return 0;
}