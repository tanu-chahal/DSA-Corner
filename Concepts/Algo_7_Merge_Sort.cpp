//Merge Sort Algorithm :- Runs Pirfactly :) Yayy!
#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

void doMerge(int *arr,int low, int mid, int high)
{
    int i = low, j = mid+1, k = low;
    int A[high+1];

    while(i<=mid &&j<=high){ //copying elements in sorted order from both arrays to new array A[];
        if(arr[i]<=arr[j]){
            A[k] = arr[i];
            i++;
            k++;
        }
        else{
            A[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i<=mid){ //Getting remaining elements from first array
        A[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high){ //Getting remaining elements from second array
        A[k]=arr[j];
        j++;
        k++;
    }
    //Copying Elements of new sorted array to our original array
    for(i=low; i<=high; i++){
        arr[i]= A[i];
    }
}

void mergeSort(int *arr, int low, int high)
{
   if(low<high){
      int mid = low+(high-low)/2;
      mergeSort(arr, low, mid); //first dividing the array into smaller arrays (till size of each sub array =1)
      mergeSort(arr, mid+1, high);
      doMerge(arr,low, mid, high);//then sorting & merging them recursively
   }
}

int main()
{
    int arr[] = {2,44,7,6,56,32,17,6,-1};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Before Sorting: ";
    display(arr,n);

    mergeSort(arr, 0, n-1);

    cout<<"After Sorting: ";
    display(arr,n);

    return 0;
}
