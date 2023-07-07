//Printing Numbers Till n In Increasing & Decreasing Order - Using Recursion

#include<bits/stdc++.h>
using namespace std;

void increasing(int n)
{
    if(n==1){
        cout<<n<<" ";
        return;
    }
    increasing(n-1);
    cout<<n<<" ";
}

void decreasing(int n)
{
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    decreasing(n-1);
}

int main()
{
    int n;
    cout<<"Input the number till you want to print numbers: ";
    cin>>n;
    cout<<endl;

    cout<<"Numbers till "<<n<<" in increasing order: ";
    increasing(n);
    cout<<endl;

    cout<<"Numbers till "<<n<<" in decreasing order: ";
    decreasing(n);
    cout<<endl;

    return 0;
}

