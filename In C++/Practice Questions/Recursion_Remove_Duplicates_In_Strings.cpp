//Remove Duplicates In Strings Using Recursion
#include<bits/stdc++.h>
using namespace std;

string removeDups(string s)
{
    if(s.length()==0)
        return "";

    char ch = s[0];
    string ans = removeDups(s.substr(1));
    if(ans[0]==ch){
        return ans;
    }
    return ch+ans;
}
int main()
{
    string s;
    cout<<"Input your string: ";
    getline(cin,s);
    cout<<endl;

    cout<<"String after removing duplicates: "<<removeDups(s)<<endl;
    return 0;
}
