//Checking whether a number is prime or not
#include<iostream>
using namespace std;

int main(){
int N;
cout<<"Enter a number (to check whether prime or not): ";
cin>>N;

int i;
for(i=2;i<=N/2;i++){
    if(N%i==0){
        cout<<"\n"<<N<<" is not a prime number.";
        break;
    }
}
if(i>N/2){
    cout<<"\n"<<N<<" is a prime number";
}
return 0;}

