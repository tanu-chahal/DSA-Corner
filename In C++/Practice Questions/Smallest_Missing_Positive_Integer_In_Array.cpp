//Find the smallest missing positive integer in the array
#include<bits/stdc++.h>
using namespace std;

const int N = int(1e6 + 2);
bool check[N];

int main()
{
    int n,i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    for(i=0; i<::N; i++){
        check[i] = false;
    }

    for(i=0; i<n; i++){
        if(arr[i]>=0){
            check[arr[i]] = true;
        }
    }

    for(i=0; i<::N; i++){
        if(!check[i]){
            break;
        }
    }

    cout<<"Smallest positive integer missing from your array is: "<<i<<endl;
    return 0;
}
