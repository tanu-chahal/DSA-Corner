//Printing all sub-arrays of an array

#include<bits/stdc++.h>
using namespace std;

void printSubarrays (int arr[], int n)
{
    cout<<"All the sub-arrays of your array are:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
               cout<<arr[k]<<" ";
            }
                   cout<<endl;
        }
    }
}
int main(){
int n;
cout<<"Enter the size of your array: ";
cin>>n;
cout<<endl;

int arr[n];
cout<<"Input the array: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}
cout<<endl;

printSubarrays(arr,n);
return 0;
}
