//Sum of N continuous natural numbers
#include<iostream>
using namespace std;

int main(){
int N;
cout<<"Enter the number(up to which sum is to be given): ";
cin>>N;
int sum = 0;
for(int i=1;i<=N;i++){
    sum+=i;
}
cout<<"\nSum of first "<<N<<" natural numbers is: "<<sum;
return 0;}

