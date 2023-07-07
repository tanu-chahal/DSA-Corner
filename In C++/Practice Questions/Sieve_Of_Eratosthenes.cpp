//Prime Numbers within  a given range using Sieve Of Eratosthenens

#include<bits/stdc++.h>
using namespace std;

void primeSieve(int n)
{
   int prime[101];
   for(int i=0; i<101;i++){
      prime[i]=0;
   }

   for(int i=2; i<=n;i++){
      if(prime[i]==0){
        for(int j=i*i; j<=n; j+=i){
            prime[j]=1;
        }
      }
    }

    for(int i=2; i<=n; i++){
        if(prime[i]==0){
           cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter up to where you want to print prime numbers: ";
    cin>>n;
    cout<<endl;

    cout<<"Prime numbers up to "<<n<<" are: ";
    primeSieve(n);

    return 0;
}
