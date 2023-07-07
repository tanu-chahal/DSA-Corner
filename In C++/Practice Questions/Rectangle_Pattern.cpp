// Printing Rectangle Pattern of *
#include<iostream>
using namespace std;

int main(){
    int col,row;
    cout<<"Enter the number of rows & columns: ";
    cin>>row>>col;
    cout<<"\nCreating Rectangle Pattern\n";
for(int i =0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<"* ";}
   cout<<"\n";
}

    return 0;}

