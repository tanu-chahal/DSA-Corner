//Making a half pyramid using 0s and 1s
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of rows for the pyramid: ";
cin>>n;

cout<<"\nThe half pyramid of os and 1s is:\n ";
for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
          if((i+j)%2==0){
             cout<<"1 ";
           }
          else{
             cout<<"0 ";
           }
     }
     cout<<"\n ";
  }

return 0;
}
