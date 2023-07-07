//Write the string in uppercase and lowercase
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "558903";
    cout<<"Our string is: "<<str<<endl;

    sort(str.begin(), str.end(), greater<int>() );
    cout<<"Largest number from our numeric string is: "<<str<<endl;
    return 0;
}

