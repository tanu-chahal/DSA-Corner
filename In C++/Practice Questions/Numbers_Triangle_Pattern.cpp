//Number triangle pattern using *
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of rows for Numbers Triangle: ";
cin>>n;
cout<<"\nThe Numbers Triangle\n";

for(int i=1;i<=n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<" "<<j<<" ";
    }
    cout<<endl;
}
return 0;
}
