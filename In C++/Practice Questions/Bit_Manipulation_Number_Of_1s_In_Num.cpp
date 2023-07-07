//Count number of 1s in a given number
#include<bits/stdc++.h>
using namespace std;

int numberOfOnes(int n){
    int setBits = 0;
    while(n){
        n = (n&(n-1));
        setBits++;
        //For e.g. 10011 (19)
        // n = 10011 & 10010 = 10010 =>setBits = 1
        //n = 10010 &10001 = 10000 =>setBits = 2
        //n = 10000 & 01111 = 0000 => setBits= 3
    }
    return setBits;
}

int main()
{
    int n;
    cout<<"Enter the number in which you wanna count set bits (or 1s): ";
    cin>>n;
    cout<<endl;

    cout<<"Number of Set Bits (or 1s) in "<<n<<" : "<<numberOfOnes(n)<<endl;
    return 0;
}
