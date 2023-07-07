//Solving Tower Of Hanoi problem using Recursion

#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper){
   if(n==0) //base case
     return;
   //recursive case
   towerOfHanoi(n-1,src,helper,dest);
   cout<<"Move from "<<src<<" to "<<dest<<endl;
   towerOfHanoi(n-1,helper,dest,src);
}

int main()
{
    int n;
    cout<<"Enter the no. of blocks in Tower Of Hanoi: ";
    cin>>n;
    cout<<endl;

    towerOfHanoi(n,'A','C','B');
    cout<<endl;
    return 0;
}

