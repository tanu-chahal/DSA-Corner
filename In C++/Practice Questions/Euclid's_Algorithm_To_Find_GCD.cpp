//Finding GCD (Greatest Common Divisor) using Euclid's Algorithm

#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
   int n1 = max(a,b);
   int n2 = min(a,b);
   while(n2>0){   //Euclid's Algorithm
    int temp = n2;
    n2 = n1%n2;
    n1 = temp;
   }
   return n1;
}

int main()
{
    int a,b;
    cout<<"Enter the two numbers you want the GCD of: ";
    cin>>a>>b;
    cout<<endl;

    cout<<"GCD of "<<a<<" & "<<b<<" is: "<<GCD(a,b)<<endl;

    return 0;
}
