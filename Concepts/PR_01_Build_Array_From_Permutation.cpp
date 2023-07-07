/*
Build an array from permutation
Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive)
*/

#include<iostream>
using namespace std;

int main(){
int nums[] = {5,0,1,2,3,4};
int length = sizeof(nums)/sizeof(int);
int *ans = new int;
cout<<"New Array is:"<<endl;
for(int i=0; i<length;i++){
    ans[i] = nums[nums[i]];
    cout<<ans[i]<<" ";
}

return 0;
}
