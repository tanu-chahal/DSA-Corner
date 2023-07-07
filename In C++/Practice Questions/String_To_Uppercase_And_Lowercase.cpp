//Write the string in uppercase and lowercase
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "tanu Chahal";

    //to uppercase
    for(int i=0; i<str.size(); i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]-=32;
        }
    }
    cout<<"Our string in uppercase: "<<str<<endl;

    //to lowercase
    for(int i=0; i<str.size(); i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<"Our string in lowercase: "<<str<<endl;

    //using built-in functions;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<"Our string transformed into uppercase (using transform function): "<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<"Our string transformed into lowercase (using transform function): "<<str<<endl;


    return 0;
}
