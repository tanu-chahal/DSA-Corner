//Calculating numbers of numbers (up to a limit) divisible by one of two numbers given using Inclusion-Exclusion Principle

#include<bits/stdc++.h>
using namespace std;

int divisible(int a, int b, int r)
{
   int c1=r/a;
   int c2=r/b;
   int c3=r/(a*b);
   return c1+c2-c3; //Inclusion-exclusion Principle
}

int main()
{
    int a,b,r;
    cout<<"Enter the numbers you want to divisible by & the limit: ";
    cin>>a>>b>>r;
    cout<<endl;

    cout<<"Number of numbers (up to "<<r<<") divisible by "<<a<<" or "<<b<<" are: "<<divisible(a,b,r)<<endl;

    return 0;
}

