//Array Challenge-1 Max till i

#include<iostream>
using namespace std;

int maximum(int arr[], int i){
    int maximum = arr[0];
 for(int j=1; j<=i;j++){
    if(arr[j]>maximum){
        maximum = arr[j];
    }
}
 return maximum;
}

int main(){
int arr[]= {3,4,-11,5,2,9,0,6,33};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"Our array is : ";
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
for(int i=0; i<n;i++){
    cout<<"The max till index "<<i<<" is: "<<maximum(arr,i)<<endl;
}
return 0;
}
