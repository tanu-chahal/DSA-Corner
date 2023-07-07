//Sum of all sub-arrays of an array

#include<iostream>
using namespace std;

int main()
{
    int arr[]= {1,2,0,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    cout<<"Our array arr is : ";
    for(int i=0; i<n; i++){
           cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            cout<<"Sum of sub-array of arr is: "<<sum<<endl;
        }
    }
   return 0;
}
