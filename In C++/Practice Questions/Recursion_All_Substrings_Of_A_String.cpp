//Printing all Substrings of a String using Recursion

#include<bits/stdc++.h>
using namespace std;

void getSubstrs(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=str[0];
    string ros = str.substr(1);
    getSubstrs(ros,ans);
    getSubstrs(ros,ans+ch);
}

int main()
{
    string str;
    cout<<"Input your string: ";
    getline(cin,str);
    cout<<endl;

    cout<<"All the substrings of your string are: "<<endl;
    getSubstrs(str,"");
    return 0;
}
