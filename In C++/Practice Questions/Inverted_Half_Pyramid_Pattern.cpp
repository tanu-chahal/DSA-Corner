//Inverted Half Pyramid Pattern Using *
#include<iostream>
using namespace std;

int main(){
int row;
cout<<"How many rows you want in Inverted Half Pyramid?\n : ";
cin>>row;

cout<<"\nPrinting Inverted Half Pyramid\n";
for(int i=row;i>0;i--){
   for(int j=0;j<i;j++)
   {
      cout<<"* ";
    }
 cout<<endl;
}
return 0;}
