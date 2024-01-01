#include<stdio.h>
#include<stdlib.h>

void merge(int a[], int lb, int mid, int ub)
{
    int b[100];
    int i = lb;
    int j = mid + 1;
    int k = lb;
    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    for (int x = lb; x <= ub; x++)
    {
        printf("%d ",b[x]);
    }
    
}
void mergesort(int a[], int lb, int up)
{
    int mid;
    if (lb < up)
    {
        mid = (lb + up) / 2;
        mergesort(a, lb, mid);
        mergesort(a, mid + 1, up);
        merge(a, lb, mid, up);
    }
}

int main()
{
    int n;
    printf("Enter no. of array you want to sort : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n - 1);
}