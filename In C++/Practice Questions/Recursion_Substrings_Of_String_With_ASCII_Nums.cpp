//Substring of a String along with their ASCII numbers - Using Recursion

#include<bits/stdc++.h>
using namespace std;

void getSubstrs(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=str[0];
    int code = ch;
    string ros = str.substr(1);
    getSubstrs(ros,ans);
    getSubstrs(ros,ans+ch);
    getSubstrs(ros,ans + to_string(code));
}

int main()
{
    string str;
    cout<<"Input your string: ";
    getline(cin,str);
    cout<<endl;

    cout<<"All the substrings (along with ASCII numbers) of your string are: "<<endl;
    getSubstrs(str,"");
    return 0;
}
