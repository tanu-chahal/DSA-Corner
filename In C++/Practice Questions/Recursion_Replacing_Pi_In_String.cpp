//Replacing pi in a string with 3.14 using recursion

#include<iostream>
#include<string>
using namespace std;

void replacePi(string str){
   if(str.size()==0) //base case
     return;
   //recursive case
   if(str[0]=='p'&&str[1]=='i'){
    cout<<"3.14";
    replacePi(str.substr(2));
   }
   else{
    cout<<str[0];
    replacePi(str.substr(1));
   }
}

int main()
{
    string str;
    cout<<"Enter your string to replace pi with 3.14: ";
    getline(cin,str);
    cout<<endl;

    cout<<"After replacing pi with 3.14 your string is: ";
    replacePi(str);
    cout<<endl;
    return 0;
}
