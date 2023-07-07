//Printing all prime numbers within a given range
#include<iostream>
using namespace std;

int main(){
int a,b;
cout<<"For getting prime numbers, enter the range: ";
cin>>a>>b;

cout<<"\nThe prime numbers between "<<a<<" and "<<b<<" are: \n";
for(a;a<=b;a++){
        int i;
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            break;
        }
    }
    if(i>a/2){
        cout<<a<<" ";
    }
}
return 0;}
