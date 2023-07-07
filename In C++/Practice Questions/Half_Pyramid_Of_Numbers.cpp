//Half Pyramid of numbers
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of rows for pyramid: ";
cin>>n;
cout<<"\nThe half pyramid of numbers:\n";
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j<=i){
            cout<<i+1<<" ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
return 0;}
