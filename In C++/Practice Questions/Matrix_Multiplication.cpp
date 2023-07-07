//Matrix Multiplication

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,p,q;
    cout<<"Input order of multiplicand matrix: ";
    cin>>m>>n;
    cout<<endl;
    cout<<"Input order of multiplier matrix: ";
    cin>>p>>q;
    cout<<endl;

    if(n!=p){
        cout<<"Invalid Order Of Matrices!"<<endl;
        return 0;
    }

    int mtx1[m][n];
    cout<<"Input Multiplicand Matrix:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cin>>mtx1[i][j];
    }
    cout<<endl;
    int mtx2[p][q];
    cout<<"Input Multiplier Matrix:"<<endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++)
            cin>>mtx2[i][j];
    }
    cout<<endl;

    int res[m][q];
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++)
            res[i][j] = 0;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0; k<n; k++){
                res[i][j]+= mtx1[i][k]*mtx2[k][j];
            }

        }
    }
    cout<<"Multiplication of the Matrix,"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;

    return 0;
}

