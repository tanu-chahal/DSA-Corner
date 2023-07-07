//Checking whether a number is ArmStrong Number or not.
//Armstrong Number = A number whose individual digits cubes sum is equal to the number. For e.g. 153
// (1)^3 = 1, (5)^3 = 125 & (3)^3 = 27
//1+125+27 = 153 (Hence an Armstrong Number)

#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n;
cout<<"Enter a number(to check for Armstrong Number): ";
cin>>n;
int testNum =n;
int armNum = 0;
while(testNum>0){
    int digit = testNum%10;
    armNum = armNum + pow(digit,3);
    testNum= testNum/10;
}
if(armNum==n){
    cout<<endl<<n<<" is an Armstrong number."<<endl;
}
else{
    cout<<endl<<n<<" is not an Armstrong number."<<endl;
}
return 0;
}
