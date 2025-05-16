#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[20];
    long long roll_no;
    float marks;
} std;

int main()
{
    // typedef int num;
    // num a = 10;
    // printf("The value of a is %d", a);

    // typedef struct employee Emp;

    std s1;
    std *ptr1 = &s1;
    strcpy(s1.name, "Dhiraj");
    s1.roll_no = 2247277080LL;
    s1.marks = 89.8;
    printf("%s %lld %.2f\n", s1.name, s1.roll_no, s1.marks);
    printf("%s %lld %.2f\n", ptr1->name, ptr1->roll_no, ptr1->marks);
    return 0;
}