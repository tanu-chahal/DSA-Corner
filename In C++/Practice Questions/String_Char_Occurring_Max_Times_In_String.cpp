//Frequency of the character occurring maximum times in the string
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "aaabbbbcccccdddeeefffffffgghhi";
    cout<<"Our string is: "<<str<<endl;

    int frequency[26]; //an array to count the times any alphabet occurs
    for(int i=0; i<26; i++)
      frequency[i]=0;

    for(int i=0; i<str.size(); i++){
        frequency[str[i] - 'a' ]++;
    }

    char ansChar = 'a';
    int maxFreq = 0;

    for(int i=0; i<26; i++){
        if(frequency[i]>maxFreq){
            maxFreq = frequency[i];
            ansChar = 'a' + i;
        }
    }

    cout<<"In our string '"<<ansChar<<"' occurs maximum times that is "<<maxFreq<<" times."<<endl;
    return 0;
}

