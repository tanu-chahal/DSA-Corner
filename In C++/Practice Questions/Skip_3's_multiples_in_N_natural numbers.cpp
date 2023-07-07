//Use of continue & break statement
//continue statement brings the control on the next iteration without executing the statements after it in that iteration
//break statement brings the control out of loop and doesn't execute the statements after its execution in that iteration

//Skip 3's multiples in printing N natural numbers
#include<iostream>
using namespace std;

int main(){
int N;
cout<<"Up to what you want to print Natural numbers: ";
cin>>N;
cout<<"\nNatural numbers up to "<<N<<" (skipping 3's multiples)\n";
for(int i=1 ;i<=N;i++){
    if(i%3==0){
    continue;}
    cout<<i<<" ";
}
return 0;}
