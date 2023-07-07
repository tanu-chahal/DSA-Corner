//Finding unique numbers in an array using bit manipulation
#include<bits/stdc++.h>
using namespace std;

bool getBit(int num, int pos){
     return ( (num & (1<<pos) )!=0) ;
}

int setBit(int num, int pos){
     return (num | (1<<pos) );
}

int oneUniqueNumber(int arr[], int n)
{
    int xorSum = 0;
    for(int i=0; i<n; i++){
        xorSum = xorSum^arr[i];
        //xorSum = 0000 ^ 0010 => 0010 (2) (i=0)
        //xorSum = 0010 ^ 0101 => 0111 (7) (i=1)
        //xorSum = 0111 ^ 0110 => 0001 (1) (i=2)
        //xorSum = 0001 ^ 0110 => 0111 (7) (i=3)
        //xorSum = 0111 ^ 0101 => 0010 (2) (i=4)
        //xorSum = 0010 ^ 1001 => 1011 (11)(i=5)
        //xorSum = 1011 ^ 0010 => 1001 (9) (i=6)
    }
    return xorSum;
}

void twoUniqueNumbers(int arr[], int n)
{
    int xorSum=0;
    for(int i=0; i<n; i++){
        xorSum = xorSum^arr[i];
    }
    int tempXor = xorSum;

    int setbit=0,pos=0;
    while(setbit!=1){
       setbit = xorSum & 1;
       pos++;
       xorSum = xorSum>>1;
    }

    int newXor=0;
    for(int i=0; i<n; i++){
        if(getBit(arr[i],pos-1)){
           newXor = newXor^arr[i];
        }
    }
    cout<<newXor<<" ";
    tempXor = tempXor^newXor;
    cout<<tempXor<<endl;
}

int uniqueNumberInThrice(int arr[], int n){
    int result=0;
    for(int i=0; i<64; i++){
       int sum =0;
       for(int j=0; j<n; j++){
            if( getBit(arr[j],i) ){
                sum++;
            }
       }
       if(sum%3!=0){
        result = setBit(result,i);
       }
    }
    return result;
}

int main()
{
    int arr[]={2,5,6,6,5,9,2};
    cout<<"---- For One Unique Number ----"<<endl;
    cout<<"The array is: ";
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Unique number in the array is: "<<oneUniqueNumber(arr,7)<<endl;

    int arr2[]={2,5,6,4,6,5,9,2};
    cout<<endl<<"---- For Two Unique Numbers ----"<<endl;
    cout<<"The array is: ";
    for(int i=0; i<8; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"Unique numbers in the array are: ";
    twoUniqueNumbers(arr2,8);

    int arr3[]={2,5,6,4,2,6,5,4,9,4,5,6,2};
    cout<<endl<<"---- For A Unique Number When Element Repeats Thrice ----"<<endl;
    cout<<"The array is: ";
    for(int i=0; i<13; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    cout<<"Unique number in the array is: "<<uniqueNumberInThrice(arr3,13)<<endl;
    return 0;
}
