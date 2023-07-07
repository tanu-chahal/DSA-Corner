//Printing 2D Matrix In Spiral Order

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cout<<"Input order of matrix: ";
    cin>>m>>n;
    cout<<endl;

    int arr[m][n];
    cout<<"Input Your Matrix:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    cout<<endl;

    cout<<"Matrix Normally,"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
    int rowStart=0, rowEnd=m-1, colStart=0, colEnd=n-1;
    cout<<"Matrix spirally,"<<endl;
    while(rowStart <= rowEnd && colStart <= colEnd){
        // for rowStart
        for(int col=colStart; col<=colEnd; col++)
            cout<<arr[rowStart][col]<<" ";
        rowStart++;
        cout<<endl;
        //for colEnd
        for (int row=rowStart; row<=rowEnd; row++)
            cout<<arr[row][colEnd]<<" ";
        colEnd--;
        cout<<endl;
        //for rowEnd
        for (int col=colEnd; col>=colStart; col--)
            cout<<arr[rowEnd][col]<<" ";
        rowEnd--;
         cout<<endl;
        //for colStart
        for(int row=rowEnd; row>=rowStart; row--)
            cout<<arr[row][colStart]<<" ";
        colStart++;
        cout<<endl;
    }
    return 0;
}
