//Prime Factors of a number using Sieve Of Eratosthenens

#include<bits/stdc++.h>
using namespace std;

void primeFactor(int n)
{
   int spf[101]={0};
   for(int i=2; i<=n; i++){
    spf[i]=i;
   }
   for(int i=2; i<=n;i++){
      if(spf[i]==i){
        for(int j=i*i; j<=n; j+=i){
            if(spf[j]==j){
                spf[j]=i;
            }
        }
      }
    }

    while(n!=1){
        cout<<spf[n]<<" ";
        n = n/spf[n];
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"You want prime factors of which number: ";
    cin>>n;
    cout<<endl;

    cout<<"Prime factors of "<<n<<" are: ";
    primeFactor(n);

    return 0;
}
