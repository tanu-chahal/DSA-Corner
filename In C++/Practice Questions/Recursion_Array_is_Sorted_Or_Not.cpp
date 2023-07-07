//Using recursion to find if the array is strictly increasing i.e. sorted

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n)
{
    if(n==1)
        return true;

    int restArray = isSorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

int main()
{
    int n;
    cout<<"Input the size of your array: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Input your array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    if(isSorted(arr,n))
        cout<<"Your array is strictly increasing."<<endl;
    else
        cout<<"Your array isn't sorted."<<endl;

    return 0;
}
