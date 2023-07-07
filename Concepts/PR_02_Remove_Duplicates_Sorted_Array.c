/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.
*/
#include<stdio.h>

int removeDuplicates(int* nums, int numsSize){
    int k =1;
for(int i=0;i<numsSize;i++){
    if(nums[i]==nums[i+1]){
        int temp =nums[i];
        int j = i;
        while(i<numsSize){
        nums[i]=nums[i+1];
        i++;
        }
        i =j;
        nums[numsSize-1]=temp;
    }
    else if(nums[i]==nums[i-1]){
        int temp =nums[i-1];
        int j = i;
        while(i<numsSize){
        nums[i-1]=nums[i];
        i++;
        }
        i =j;
        nums[numsSize-1]=temp;
    }
    else{

    }
}
for(int i=1;i<numsSize;i++){
    if(nums[0]==nums[i]){
        break;
    }
    else{
        k++;
    }
}
  return k;
}

int main(){
    int nums[] ={0,0,1,1,1,2,2,3,3,4};
    int expectedNums[]={0,1,2,3,4};
    int k = removeDuplicates(nums, (sizeof(nums)/sizeof(int)));
    k == (sizeof(expectedNums)/sizeof(int))?printf("\nEverything is fine :)\n") :printf("\nError k!=expectedNums.length\n");
for (int i = 0; i < k; i++) {
    printf(" %d ",nums[i]);
    nums[i] == expectedNums[i]? :printf("\nError! %d!=%d\n",nums[i],expectedNums[i]);
}
return 0;
}
