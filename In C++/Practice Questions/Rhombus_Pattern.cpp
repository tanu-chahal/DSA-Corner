//Printing Rhombus Pattern using *(stars)
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of rows for rhombus pattern: ";
cin>>n;
cout<<"\nThe Rhombus Pattern\n";

for(int i = 0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
        cout<<"   ";
    }
    for(int j=0;j<n;j++){
        cout<<" * ";
    }
    cout<<endl;
}
return 0;
}

