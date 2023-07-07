//Find starting and ending index of a sub-array with sum (of the sub-array elements) equal to the given number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,S;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<endl;

    cout<<"Enter the sum you want: ";
    cin>>S;
    cout<<endl;

    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    int Sum=0, st=-1,en=-1, i=0, j=0;

    while(j<n && (Sum + arr[j] >= S) ){
        Sum+=arr[j];
        j++;
    }
    if(Sum == S){
        cout<<"The indexes of the sub-array whose sum is equal to given sum "<<S<<" are: "<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        Sum+= arr[j];
        while(Sum>S){
            Sum-=arr[i];
            i++;
        }
        if(Sum == S){
            st=i;
            en=j;
            break;
        }
        j++;
    }

    if(Sum == S){
        cout<<"The indexes of the sub-array whose sum is equal to given sum "<<S<<" are: "<<st<<" & "<<en<<endl;
    }
    else{
        cout<<"No sub-array has sum equal to the given sum "<<S<<endl;
    }

    return 0;
}
