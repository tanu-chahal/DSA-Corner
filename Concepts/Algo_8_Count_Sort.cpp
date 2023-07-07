//Count Sort Algorithm :- Runs Pirfactly :)
#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

int maximumNum(int arr[],int n)
{
    int m = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>m){
            m = arr[i];
        }
    }
    return m;
}

void countSort(int *arr, int n)
{
    int i,j;
    int m=maximumNum(arr,n);

    int *A = new int[m+1];
    for(i=0; i<=m; i++){
        A[i]=0;
    }

    for(i=0; i<n; i++){
        A[ (arr[i]) ]++;
    }

    i=0; j=0;
    while(i<=m){
       if(A[i]>0){
        arr[j]=i;
        j++;
        A[i]--;
       }
       else{
       i++;
       }
    }
}

int main()
{
    int arr[] = {2,9,7,6,5,4,7};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Before Sorting: ";
    display(arr,n);

    countSort(arr, n);

    cout<<"After Sorting: ";
    display(arr,n);

    return 0;
}

