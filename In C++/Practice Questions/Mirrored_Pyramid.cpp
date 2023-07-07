//Mirrored Pyramid
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of rows for Mirrored Pyramid: ";
cin>>n;
cout<<"\nThe Mirrored Pyramid Of Stars:\n";

if(n%2==0){
    n = n/2;
}
else{
        n = n/2+1;
        }

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){

        if(j>=(n-i+1)){
           cout<<" * ";}
        else{
            cout<<"   ";
        }
    }
      for(int j=n-1;j>=1;j--){
            if(j<=n-i){
                cout<<"   ";
            }
            else{
                cout<<" * ";
            }
       }

    cout<<endl;

}
for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){

        if(j<=i-1){
           cout<<"   ";}
        else{
            cout<<" * ";
        }
    }
      for(int j=1;j<=n-1;j++){
            if(j<=n-i){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
       }
     cout<<endl;
}


//Second method
cout<<"\n\nBy Second Method:\n";

for(int i =1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n;i>=1;i--){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}

