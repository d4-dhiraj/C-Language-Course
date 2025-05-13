#include <stdio.h>
void printArray(int a[], int n);
void reverse(int a[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    reverse(arr, 5);
    printArray(arr, 5);
    return 0;
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

/*{1, 2, 3, 4, 5}
0th index => 4th index
1st index => 3rd index
stop
i from 0 to 1
i from 0 to n/2
ith index => (n-i-1)th index
arr[i] => arr[n-i-1]
*/