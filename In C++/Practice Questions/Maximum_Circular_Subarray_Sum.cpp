//Maximum Sum of a sub-array of Circular Array

#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int currSum = 0;
    int sum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        sum = max(sum,currSum);

        if(currSum<0){
            currSum =0;
        }
    }
    return sum;
}

int main()
{
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

    //For e.g. [4, -4, 6, -6, 10, -11, 12];
    int wrapSum;
    int nowrapSum = kadane(arr,n);

    //Calculating Wrap Sum

    int totalSum =0;
    for(int i=0; i<n; i++){
        totalSum+=arr[i]; // Calculating sum of all array elements
        arr[i] = -arr[i]; //changing sign
    }

    wrapSum = totalSum + kadane(arr,n);

    cout<<"Max Sum without wrapping: "<<nowrapSum<<endl;;
    cout<<"Max Sum with wrapping: "<<wrapSum<<endl;
    return 0;
}
