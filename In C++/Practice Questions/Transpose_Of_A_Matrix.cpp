//Transpose of a matrix

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Input order of square matrices: ";
    cin>>n;
    cout<<endl;

    int arr[n][n];
    cout<<"Input Your Matrix:"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            //swap
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout<<"Transpose of the Matrix,"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
