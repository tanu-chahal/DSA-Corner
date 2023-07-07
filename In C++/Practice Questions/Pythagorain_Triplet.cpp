//Check whether three numbers are Pythagorian Triplet or not
#include<iostream>
using namespace std;

bool arePythagorian(int l, int x, int y)
{
     if(l*l == (x*x +y*y)){
            return true;
      }
     else{
            return false;
      }
}

bool largest(int a, int b, int c){
     if(a>b){
                if(a>c){
                  return arePythagorian(a,b,c);
                 }
                else{
                  return arePythagorian(c,a,b);
                 }
     }
    else{
               if(b>c){
                 return arePythagorian(b,a,c);
               }
               else{
                 return arePythagorian(c,a,b);
               }
     }

}

int main(){
    int a,b,c;
    cout<<"Enter three positive integers: ";
    cin>>a>>b>>c;
    bool py = largest(a,b,c);
    if(py){
      cout<<endl<<a<<", "<<b<<" & "<<c<<" make a Pythagorian triplet."<<endl;
    }
    else{
        cout<<endl<<a<<", "<<b<<" & "<<c<<" doesn't make a Pythagorian triplet."<<endl;
    }
return 0;
}
