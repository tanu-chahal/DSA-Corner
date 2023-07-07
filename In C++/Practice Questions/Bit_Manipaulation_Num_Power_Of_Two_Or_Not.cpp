//To check whether a given number is power of two or not using Bit Manipulation...
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
    return (n && !(n & n-1));
    //For e.g. 4 (0100)
    // n & n-1 => 0100 & 0011 => 0000 (0)
    //!(n&n-1) => !(0) = 1
    //n && !(n&n-1) => 8 && 1 = false
}

int main()
{
    int n;
    cout<<"Enter the number which you wanna check whether power of 2 or not: ";
    cin>>n;
    cout<<endl;

    if(isPowerOfTwo(n))
        cout<<"Yes! "<<n<<" is a power of two."<<endl;
    else
        cout<<"No! "<<n<<" isn't power of two."<<endl;
    return 0;
}
