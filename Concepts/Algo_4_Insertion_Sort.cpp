//Insertion Sort Algorithm :- Runs Pirfactly :)
//Time Complexity: O(N^2)
//Auxiliary Space: O(1)

#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}

void insertionSort(int *arr, int n)
{    int key, j;
    for(int i=1; i<n;i++){
       key = arr[i];
       j =i-1;
       while(j>=0 && arr[j]>key){
        arr[j+1] =arr[j];
        j--;
       }
       arr[j+1] = key;
    }
}

int main()
{
    int arr[]= {2,9,8,5,4,54,33,78};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Before Sorting:";
    display(arr,n);

    insertionSort(arr, n);

    cout<<"After Sorting:";
    display(arr,n);

    return 0;
}
