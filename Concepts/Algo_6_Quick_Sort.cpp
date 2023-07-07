//Quick Sort Algorithm :- Runs Pirfactly :))
//Time-complexity : O(nlogn)
#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

void doSwap (int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

int doPartition(int *arr, int low, int high)
{
    //arr[low] is our pivot here
    int pivot = arr[low];
    int i = low+1, j = high;

    do {
          while(arr[i]<=pivot){
                i++;
          }
          while(arr[j]>pivot){
                j--;
          }
          if( i<j ){
                doSwap(arr[i],arr[j]);
           }
    }while(i<j);

    doSwap(arr[low],arr[j]);

    return j;
}

void quickSort(int *arr, int low, int high)
{
   if(low<high){
      int partitionIndex = doPartition(arr, low, high); //index of pivot after partition
      quickSort(arr, low, partitionIndex-1);
      quickSort(arr, partitionIndex+1, high);
   }
}

int main()
{
    int arr[] = {2,9,100,44,7,56,32,17,6,-1,9};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Before Sorting: ";
    display(arr,n);

    quickSort(arr, 0, n-1);

    cout<<"After Sorting: ";
    display(arr,n);

    return 0;
}
