#include <iostream>
using namespace std;

class MyClass {
   int x;
   public:
       MyClass(int num){
        x = num;
        }
       friend MyClass operator - (MyClass obj);
       /*
       void operator - (){
          x = -x;
          cout<<"Operator Overloaded in Member Function."<<endl;
       }
       */
       void printX(){
       cout<< "x= "<< x<<endl;
       }
};

MyClass operator - (MyClass obj){
     obj.x = -obj.x;
     cout<<"Operator Overloaded Using Friend Function  vvv  ."<<endl;
     return obj;
}

int main(){
    MyClass obj(5);
    obj.printX();
    obj = -obj;
    //-obj;
    obj.printX();
    return 0;
}
