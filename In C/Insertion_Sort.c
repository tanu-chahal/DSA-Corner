// Insertion Sorting Algorithm
#include<stdio.h>

void swap(int *x, int*y)
{
    int temp = *x;
    *x =*y;
    *y= *x;
}
void insertionSort(int arr[],int n)
{
    int i,j,temp;
    for(i=1; i<n; i++)
    {
       temp = arr[i];
       j = i-1;
       while(j>=0 && arr[j]>temp)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1] = temp;
    }
}

int main()
{   int arr[]= {34, 76, 4, 90, 21, 8, 45, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array:\n");
    for(int i=0; i<n; i++)
    {
       printf(" %d  ",arr[i]);
    }
    return 0;
}
