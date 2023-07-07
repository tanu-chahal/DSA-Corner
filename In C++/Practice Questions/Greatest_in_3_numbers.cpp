//One simple C++ program to find greatest number in 3 numbers (Simple use of cin and cout function)
#include<iostream>
using namespace std;

int main(){
int a,b,c;
cin >> a;
cin>>b;
cin>>c;
if(a>b){
        if(a>c)
{cout<<"Greatest is: "<<a;}
else
{cout<<"Greatest is: "<<c;}
}
else{
    if(b>c)
        {cout<<"Greatest is: "<<b;}
    else
    {cout<<"Greatest is: "<<c;}
   }
   return 0;
}
