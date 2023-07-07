//Reversing a string using Recursion

#include<iostream>
#include<string>
using namespace std;

void reverseString(string str){
   if(str.size()==0) //base case
     return;
   //recursive case
   string tempStr = str.substr(1);
   reverseString(tempStr);
   cout<<str[0];
}

int main()
{
    string str;
    cout<<"Enter your string to reverse: ";
    getline(cin,str);
    cout<<endl;

    cout<<"The reverse of your string is: ";
    reverseString(str);
    cout<<endl;
    return 0;
}
