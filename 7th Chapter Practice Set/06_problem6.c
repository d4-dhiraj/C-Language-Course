#include <stdio.h>
int counter(int a[], int n);
int main()
{
    int arr[] = {12, 43, 23, -24, 4, -18, -7};
    printf("Total positive numbers are %d", counter(arr, 7));
    return 0;
}
int counter(int a[], int n)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] > 0)
        {
            num++;
        }
    }
    return num;
}