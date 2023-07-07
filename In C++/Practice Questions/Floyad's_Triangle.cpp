//Making a Floyad's Triangle
#include<iostream>
using namespace std;

int main(){
int n;

cout<<"Enter the numbers of rows for Floyad's Triangle: ";
cin>>n;

cout<<"\nFloyad's Triangle\n\n";
int k= 1;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
}

return 0;}
