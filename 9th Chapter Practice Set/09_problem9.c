#include <stdio.h>
struct date
{
    int dd;
    int mm;
    int yyyy;
};
void compare(struct date dhiraj, struct date ashutosh);
int main()
{
    struct date dhiraj = {14, 06, 2007};
    struct date ashutosh = {07, 03, 2005};
    compare(dhiraj, ashutosh);
    return 0;
}
void compare(struct date dhiraj, struct date ashutosh)
{
    if (dhiraj.yyyy > ashutosh.yyyy)
    {
        if (dhiraj.mm > ashutosh.mm)
        {
            if (dhiraj.dd > ashutosh.dd)
            {
                printf("dhiraj's age is less then ashutosh's age ");
            }
            else
            {
                printf("ashutosh's age is less then dhiraj's age");
            }
        }
        else
        {
            printf("ashutosh's age is less then dhiraj's age");
        }
    }
    else
    {
        printf("ashutosh's age is less then dhiraj's age");
    }
}