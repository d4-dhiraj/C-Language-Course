#include <stdio.h>
int myexample(int *a);
int main()
{
    int i;
    int *a = &i;
    printf("%p\n", a);
    myexample(&i);
    return 0;
}
int myexample(int *a)
{
    printf("%p\n", a);
}

// Yes both addresses are same.