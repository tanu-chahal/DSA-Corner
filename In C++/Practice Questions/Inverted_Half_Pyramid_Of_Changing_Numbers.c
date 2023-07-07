//Inverted half pyramid of changing numbers
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of rows for the pyramid: ";
cin>>n;
cout<<"\nInverted Half Pyramid Of Changing Numbers\n";
  for(int i=n;i>0;i--){
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
  }
return 0;
}
