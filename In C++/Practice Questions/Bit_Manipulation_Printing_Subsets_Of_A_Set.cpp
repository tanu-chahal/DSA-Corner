//Printing Subsets of a set
#include<bits/stdc++.h>
using namespace std;

void subsets(int arr[],int n){
    for(int i=0; i<(1<<n); i++ ){ //1<<n gives 2^n => 1<<3 => 0001 => 1000
        for (int j=0; j<n; j++){
            if(i & (1<<j)){ //i & (1<<j) gives bit (getBit)
               cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of set: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Input Set: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Subsets of your set are:"<<endl;
    subsets(arr,n);
    return 0;
}
