/*
Binary Search In Arrays
Time Complexity => Best: O(1), Average: O(log n), Worst: O(log n)
Used for sorted & large size arrays.
*/
#include<iostream>
using namespace std;

int binarySearch(int arr[],int num, int l, int h){
if(h>=l){ //l<h
    int m = l+(h-l)/2;

    if(arr[m]==num){
          return m;
    }
    else if(arr[m]>num){
        h = m-1;
        return binarySearch(arr,num,l,h);
    }
    else{
             l = m+1;
        return binarySearch(arr,num,l,h);
       }
}
return -1;
}

int main(){
int arr[] = {2,5,7,9,10,34,56,78,90,100};
int n = sizeof(arr)/sizeof(arr[0]);
int num = 90;
int i = binarySearch(arr,num,0,n-1);
if(i==-1){
    cout<<num<<" not found in the array!"<<endl;
}else{
    cout<<num<<" is present at index "<<i<<" in the array."<<endl;
}

return 0;
}
