// Quick Sorting Algorithm
#include<stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x= *y;
    *y = temp;
}
int partition(int arr[], int low, int high)
{
 int pivot = arr[high];
 int i = low-1;

 for (int j = low; j<high; j++)
 {
     if(arr[j]<=pivot)
     {
         i++;
         swap(&arr[i],&arr[j]);
     }

 }
 swap(&arr[i+1],&arr[high]);
 return (i+1);
}
void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pi= partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main()
{
    int arr[]= {8, 90,17, 26, 30, 87, 82, 61, 33, 7, 55};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    for(int i=0;i<n;i++)
    {
        printf(" %d  ",arr[i]);
    }
    return 0;
}
