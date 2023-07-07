//Pair Sum Problem
//Sum of any two elements in array is equal to given sum or not.

#include<bits/stdc++.h>
using namespace std;

bool forSorted(int arr[], int n, int sum)
{
    int low=0, high=n-1;
    while(low<high){
        int s = arr[low]+arr[high];
        if(s==sum){
            cout<<"Indices: "<<low<<" & "<<high<<endl;
            return true;
        }
        else if(s<sum){
            low++;
        }
        else{
            high--;
        }
    }
    return false;
}

bool forUnSorted(int arr[], int n, int sum)
{
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==sum){
                cout<<"Indices: "<<i<<" & "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}

int main()
{
    char choice;
    cout<<"You'll enter sorted array?(Y/N)"<<endl;
    cin>>choice;
    cout<<endl;

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Input the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    int sum;
    cout<<"Now, enter the sum you want: ";
    cin>>sum;
    cout<<endl;

    if(choice == 'y'||'Y'){
        cout<<forSorted(arr,n,sum)<<endl;
    }
    else {
        cout<<forUnSorted(arr,n,sum)<<endl;
    }

    return 0;
}
