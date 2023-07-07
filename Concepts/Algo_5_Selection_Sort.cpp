//Selection Sort Algorithm :- Runs Pirfactly :)
#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

void selectionSort(int *arr, int n)
{
    for(int i=0;i<n-1;i++){
        int arrMin = arr[i];
        for(int j=i+1; j<n; j++){
            if(arr[j]<arrMin){
                int temp = arrMin;
                arrMin = arr[j];
                arr[j]= temp;
            }
        }
        arr[i]=arrMin;
    }
}

int main()
{
    int arr[] = {2,9,100,44,7,56,32,17,6};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Before Sorting: ";
    display(arr,n);

    selectionSort(arr,n);

    cout<<"After Sorting: ";
    display(arr,n);

    return 0;
}
