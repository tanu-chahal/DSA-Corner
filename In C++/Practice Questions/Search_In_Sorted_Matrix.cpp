//Search an element in a matrix with sorted rows & columns

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,element;
    cout<<"Input order of matrix: ";
    cin>>m>>n;
    cout<<endl;

    int arr[n][n];
    cout<<"Input Sorted Matrix:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    cout<<endl;

    cout<<"Input the element you want to search for: ";
    cin>>element;
    cout<<endl;

    int r=0, c=n-1;
    while(r<m && c>=0){
        if(element==arr[r][c]){
            cout<<"Element "<<element<<" found at index ("<<r<<","<<c<<")"<<endl;
            return 0;
        }
        else if(element> arr[r][c])
            r++;
        else
            c--;
    }

    cout<<"Element "<<element<<" isn't present in given matrix."<<endl;

    return 0;
}

