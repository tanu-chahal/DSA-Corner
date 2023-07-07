//Using recursion to find first & last occurrence of a number in an array

#include<bits/stdc++.h>
using namespace std;

int firstOccurred(int arr[], int n, int i, int num)
{
    if(i==n)
        return -1;

    if(num==arr[i]){
         return i;
    }

    return firstOccurred(arr,n,i+1,num);
}

int lastOccurred(int arr[], int n,int i, int num)
{
    if(i==0)
         return -1;

    if(num==arr[i]){
         return i;
    }
    return lastOccurred(arr,n,i-1,num);
}

int main()
{
    int n;
    cout<<"Input the size of your array: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Input your array: "; //1 2 3 4 2
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

   int num;
   cout<<"Input the number whose fast & last indexes you want: "; //2
   cin>>num;
   cout<<endl;

   cout<<"First and last indexes of "<<num<<" are: "<<firstOccurred(arr,n,0,num)<<" & "<<lastOccurred(arr,n,n-1,num)<<endl;

    return 0;
}
