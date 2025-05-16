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
    struct student s1, s2, s3;
    printf("Enter First student's Name : ");
    scanf("%s", &s1.name);
    printf("Enter First student's RollNo : ");
    scanf("%d", &s1.roll_no);
    printf("Enter First student's Percentage in Class 12th : ");
    scanf("%f", &s1.marks);

    printf("Enter Second student's Name : ");
    scanf("%s", &s2.name);
    printf("Enter Second student's RollNo : ");
    scanf("%d", &s2.roll_no);
    printf("Enter Second student's Percentage in Class 12th : ");
    scanf("%f", &s2.marks);

    printf("Enter Third student's Name : ");
    scanf("%s", &s3.name);
    printf("Enter Third student's RollNo : ");
    scanf("%d", &s3.roll_no);
    printf("Enter Third student's Percentage in Class 12th : ");
    scanf("%f", &s3.marks);

    printf("First Student is %s, his roll no is %d and he got %.2f percentage in class 12th\n", s1.name, s1.roll_no, s1.marks);

    printf("Second Student is %s, his roll no is %d and he got %.2f percentage in class 12th\n", s2.name, s2.roll_no, s2.marks);

    printf("Third Student is %s, his roll no is %d and he got %.2f percentage in class 12th\n", s3.name, s3.roll_no, s3.marks);
    return 0;
}