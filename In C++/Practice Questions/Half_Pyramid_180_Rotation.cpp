//Half Pyramid After 180 Degree Rotation
/*
    *
   **
  ***
 ****
*****

*/
#include<iostream>
using namespace std;

int main(){
int row;
cout<<"How many rows do you want in the pyramid?\n: ";
cin>>row;
cout<<"\nHalf Pyramid with 180 Degree Rotation\n\n";
for(int i=0;i<row;i++){
    for(int j=1;j<=row;j++){
        if(j>=(row-i)){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
return 0;}
