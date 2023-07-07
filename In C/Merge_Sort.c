// Merge Sorting Algorithm
#include<stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void conquer(int arr[], int si, int mid, int ei)
{
    int i,j,k;
    int n1 = mid-si+1;
    int n2= ei-mid;
    int L[n1], R[n2];

    for(i=0;i<n1;i++)
    {
      L[i]=arr[si +i];
    }
    for(j=0; j<n2; j++)
    {
        R[j]=arr[mid +1+j];
    }
    i=0; j=0; k= 1;

    while(i<n1&& j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i]; i++;
        }
        else{
            arr[k]=R[j]; j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i]; i++; k++;
    }
     while(j<n2)
    {
        arr[k]=R[j]; j++; k++;
    }

}

void divide(int arr[], int si, int ei)
{  if(si<ei)
  {
    int mid = si + (ei-si)/2;
    divide(arr, si, mid);
    divide(arr, mid+1, ei);
    conquer(arr, si, mid, ei);
  }
}
int main()
{
    int arr[]={8, 98,66,56, 7, 9,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    divide(arr,0,n-1);
    printf("Sorted array:\n");
    for(int i=0; i<n; i++)
    {
        printf(" %d  ",arr[i]);
    }
    return 0;
}
