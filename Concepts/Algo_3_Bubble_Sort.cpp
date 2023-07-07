//Bubble Sort Algorithm :- Runs Pirfactly :)
//Time Complexity: O(N^2)
//Auxiliary Space: O(1)
#include<iostream>
using namespace std;

void display(int *arr, int n){
  for (int i=0;i<n;i++){
    cout<<" "<<arr[i];
   }
   cout<<endl;
}
void bubbleSort(int *arr, int n){
    bool isSorted;
    for(int i= 0;i<n-1;i++){
        isSorted = true;
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                 arr[j+1] = temp;
                 isSorted = false;
            }
        }
        if(isSorted){
            cout<<"Passes: "<<i+1<<endl;
            return;
        }
    }
}
int main(){
int *arr = new int;
int n =5;

cout<<"Input your array (only 5 elements): ";
for(int i=0; i<n; i++){
  cin>>arr[i];
}

cout<<"Before Sorting:";
display(arr,n);

bubbleSort(arr,n);

cout<<"After Sorting:";
display(arr,n);

delete arr;
return 0;
}
