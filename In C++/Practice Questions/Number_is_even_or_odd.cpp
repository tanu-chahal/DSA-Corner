//To check whether a number is even or odd using if/else statements
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0){
        cout<<"\nThe number is even.";
    }
    else{
        cout<<"The number is odd.";
    }
return 0;}
