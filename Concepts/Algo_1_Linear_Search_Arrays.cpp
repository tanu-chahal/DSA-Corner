//Linear Search In Arrays
/*
Time Complexity => Best: O(1), Average: O(n), Worst: O(n)
Used for unsorted & small size arrays.
*/
#include<iostream>
using namespace std;

int linearSearch(int arr[], int num,int n){
for(int i=0; i<n; i++){
  if(arr[i]==num) {
    return i;
  }
}
return -1;
}

int main(){
int arr[] = {1,2,5,6,3,56,9};
int n = sizeof(arr)/sizeof(arr[0]);
int num = 4;
int i = linearSearch(arr,num,n);
if(i==-1){
    cout<<num<<" not found in the array!"<<endl;
}else{
    cout<<num<<" is present at index "<<i<<" in the array."<<endl;
}

return 0;
}
