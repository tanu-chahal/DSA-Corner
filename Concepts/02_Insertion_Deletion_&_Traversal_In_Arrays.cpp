//Insertion & Traversal in arrays
#include<iostream>
using namespace std;

void display(int arr[],int arrS){ //Traversal operation for displaying the array
for(int i=0;i<arrS;i++){
  cout<<arr[i]<<" ";
}
}

int insertion(int arr[],int arrSize,int index,int element,int capacity){ //inserting an element in an array
  if(arrSize>=capacity){
    return -1;
  }
  else{
    for(int i=arrSize-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 0;
  }
}

int deletion(int arr[],int &arrSize, int index){
    if(arrSize<=0){
         return -1;
    }
    else{
       for(int i = index;i<arrSize;i++) {
        arr[i]=arr[i+1];
       }
       arrSize--;
       return 0;
    }
}

int main(){
int arr[30] = {1,34,45,78,29};
int arrSize =5, element = 50, index = 3;

display(arr,arrSize);
int result = insertion(arr,arrSize,index,element,30);

if(result==0){
    arrSize+=1;
    cout<<"\nElement "<<element<<" got inserted in array successfully.\nSee, ";
    display(arr,arrSize);
}
else{
    cout<<"Oops! Error inserting "<<element<<" in array.\nArray is full!\n";
}

result = deletion(arr,arrSize,index);
  if(result==0){
      cout<<"\nElement "<<element<<" got deleted in array successfully.\nSee, ";
      display(arr,arrSize);
  }
  else{
    cout<<"Oops! Error deleting "<<element<<" from array.\nArray is already empty!\n";
  }

return 0;
}

