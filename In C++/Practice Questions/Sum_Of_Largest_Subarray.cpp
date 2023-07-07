//Sum of largest sub-array of an array

#include<bits/stdc++.h>
#include<climits>
using namespace std;

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

    int sum=INT_MIN, currSum;

    for(int i=0;i<n;i++){ //1 2 3 -9 5 6 7
        currSum=0;
        for(int j=i; j<n; j++){
            currSum += (arr[j]);
            sum = max(sum,currSum);
        }
    }

    cout<<"Sum of largest sub-array of arr is: "<<sum<<endl;

    //Calculating a sum in O(n) time complexity using Kadane's Algorithm :)
    currSum = 0;
    sum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        sum = max(sum,currSum);

        if(currSum<0){
            currSum =0;
        }
    }
    cout<<"Sum of largest sub-array of arr is (calculated with Kadane's Algorithm): "<<sum<<endl;
   return 0;
}
