// Selection Sorting Algorithm
#include<stdio.h>

void swap(int *x, int*y)
{
    int temp = *y;
    *y = *x;
    *x= temp;
}
void selectionSort (int arr[], int n)
{ int i, j,min;
    for ( i=0; i<n-1; i++)
    {    min =i;
        for(j= i+1;j<n;j++)
        {
           if(arr[j]< arr[min])
           {
               min = j;
           }
        }
     if( min!=i)
     {
         swap(&arr[min],&arr[i]);
     }
    }
}

int main()
{
    int arr[] = {3,90,78,56,34,2,89, 74};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printf("Sorted array: \n");
    for(int i=0;i<n;i++)
    {
        printf(" %d  ",arr[i]);
    }
    return 0;
}
