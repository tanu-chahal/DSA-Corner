//Conversions Binary Decimal Octal Hex
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int baseToDec(int n, int base){
    int i=0,num =0;
    while(n>0){
        int dig = n%10;
        num = num+ (dig*pow(base,i++));
        n=n/10;
    }
    return num;
}
int bigbToDec(string str, int base){
       int x=1,num =0;
       int s = str.size();
   for(int i=s-1;i>=0;i--){
         if(str[i]>='0'&&str[i]<='9'){
           num += x*(str[i]-'0');
         }
         else if(str[i]>='A'&&str[i]<='F'){
            num += x*(str[i]-'A'+10);
         }
        x*=base;
    }
   return num;
}


int main(){
int n,base;
char c;
cout<<"Is the base >10? (y/n): ";
cin>>c;

if(c=='n'||c=='N'){
cout<<endl<<"Enter a number & its base (up to base 10): ";
cin>>n>>base;
cout<<endl<<n<<" in decimal is: "<<baseToDec(n,base)<<endl;
}
else if(c== 'y'||c=='Y'){
  string str;
  cout<<endl<<"Enter a number & its base (base> 10): ";
cin>>str>>base;
cout<<endl<<str<<" in decimal is: "<<bigbToDec(str,base)<<endl;
}
else{
    cout<<endl<<"Invalid Input!"<<endl;
}

return 0;
}
