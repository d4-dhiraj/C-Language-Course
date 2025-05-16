#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

int main()
{
    struct student s1, s2;
    strcpy(s1.name, "Dhiraj");
    s1.roll_no = 32;
    s1.marks = 89.8;
    printf("Student name is %s, myroll no is %d and i got %.2f percentage in class 12th", s1.name, s1.roll_no, s1.marks);
    return 0;
}