#include <stdio.h>
void swap(int *p,int *q)
{
	//p=&n1 so p store the address of n1, so *p store the value of n1
	//q=&n2 so q store the address of n2, so *q store the value of n2

    int tmp;
    tmp = *p; // tmp store the value of n1
    *p=*q;    // *p store the value of *q that is value of n2
    *q=tmp;   // *q store the value of tmp that is the value of n1
}
int insertion(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j>=1 && arr[j]<arr[j-1])
        {
            swap(&arr[j],&arr[j-1]);
            j--;
        }
    }
    return 0;
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
    insertion(arr, n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}