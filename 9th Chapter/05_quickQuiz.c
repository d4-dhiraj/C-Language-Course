#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int roll_no;
    float marks;
};
void printing(struct student s1);
int main()
{
    struct student s1;
    strcpy(s1.name, "Dhiraj");
    s1.roll_no = 1222589872;
    s1.marks = 89.8;
    printing(s1);
    return 0;
}
void printing(struct student s1)
{
    printf("Name of student is %s , Roll No is %d and percentage in class 12th is %.2f", s1.name, s1.roll_no, s1.marks);
}