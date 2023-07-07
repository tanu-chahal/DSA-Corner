//Printing all possible words from characters on keypad phone digits - using recursion

#include<bits/stdc++.h>
using namespace std;

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans)
{
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypadArr[ch-'0'];
    string ros = s.substr(1);

    for(int i=0; i<code.length(); i++){
        keypad(ros,ans+code[i]);
    }
}

int main()
{
    string str;
    cout<<"Input your Keypad Number: ";
    getline(cin,str);
    cout<<endl;

    cout<<"All the possible words with your number are: "<<endl;
    keypad(str,"");
    return 0;
}
