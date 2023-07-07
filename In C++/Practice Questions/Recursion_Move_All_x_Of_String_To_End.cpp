//Move all 'x' in string to end - Using Recursion
#include<bits/stdc++.h>
using namespace std;

string moveX(string s)
{
    if(s.length()==0)
        return "";

    char ch = s[0];
    string ans = moveX(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}
int main()
{
    string s;
    cout<<"Input your string: ";
    getline(cin,s);
    cout<<endl;

    cout<<"String after moving 'x's to the end: "<<moveX(s)<<endl;
    return 0;
}

