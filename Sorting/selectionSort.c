#include <stdio.h>
int selection(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int min = __INT_MAX__;
        int mindx = -1;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mindx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mindx];
        arr[mindx] = temp;
    }
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    selection(arr, n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}