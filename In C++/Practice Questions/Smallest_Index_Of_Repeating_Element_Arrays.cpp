//Smallest index of repeating element in an array
//Solution needs to O(n) or O(n logn)

#include<bits/stdc++.h>
using namespace std;

const int N = int(1e6 +2);
int idx[::N];

int main()
{
 int n;
 cout<<"Enter the size of array: ";
 cin>>n;
 cout<<endl;

 int arr[n];
 cout<<"Input the array: ";
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 cout<<endl;

 //Initializing all the elements of the array to -1
 for(int i=0; i<::N; i++){
    idx[i] = -1;
 }

 int minIdx = INT_MAX;
 //Finding minimum index of repeating element
 for(int i=0; i<n; i++){
    if(idx[arr[i]] != -1){
        minIdx = min(minIdx, idx[arr[i]]);
        idx[arr[i]] = i;
    }
    else{
        idx[arr[i]] = i;
    }
 }

 if(minIdx != INT_MAX){
     cout<<"The index of repeating element is: "<<minIdx<<endl;
 }
 else{
     cout<<"No Elements Repeats! or Repeating element could not be found"<<endl;
 }

 return 0;
}
