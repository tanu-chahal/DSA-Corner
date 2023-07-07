//To reverse a given number

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
int revNum =0;
while(n>0){
    int lastDig = n%10;
    revNum = revNum*10 + lastDig;
    n = n/10;
}
cout<<"\nThe reverse of your number is: "<<revNum<<endl;
return 0;
}
