//Bit Manipulation - Get Bit, Set Bit, Clear Bit, Update Bit

#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int i) //to get the bit at index i
{
    /* n= 0101
       i = 2
       (1<<i) => 0001<<2 => 0100
       (n | (1<<i) ) => 0101 | 0100 => 0100
    */
    return ( ( n & (1<<i) )!=0 );
}

int setBit(int n, int i) // to set the the bit 1 at index i
{   /* n= 0101
       i = 1
       (1<<i) = 0001<<1 => 0010
       (n | (1<<i) ) => 0101 | 0010 => 0111
    */
    return  (n | (1<<i));
}

int clearBit(int n, int i) // to clear the the bit 1 at index i to 0
{   /* n= 0101
       i = 2
       (1<<i) = 0001<<2 => 0100
       ~(1<<i) => ~(0100) => 1011
       (n & ( ~(1<<i) ) ) => 0101 & 1011 => 0001
    */
    return (n & ( ~(1<<i)) );
}

int updateBit(int n, int i, int bit) // to update the bit at index i to given bit
{
    //First clear the bit then set the bit
    n = clearBit(n,i);
    return ( n | (bit<<i));
}

int main()
{
    // 5 = 0 1 0 1    => number
    // i = 3 2 1 0    => indexes
    cout<<"Getting bit of 5 at index 2: "<<getBit(5,2)<<endl;
    cout<<"Setting bit of 5 at index 1, 5 will become: "<<setBit(5,1)<<endl;
    cout<<"Clearing bit of 5 at index 2, 5 will become: "<<clearBit(5,2)<<endl;
    cout<<"Updating the bit of 5 at index 3 to 1, 5 will become: "<<updateBit(5,3,1)<<endl;
    cout<<"Updating the bit of 5 at index 0 to 0, 5 will become: "<<updateBit(5,0,0)<<endl;
    return 0;
}
