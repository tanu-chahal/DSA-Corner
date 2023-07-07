#include<bits/stdc++.h>
using namespace std;

//class template
//template <class T1>
//class Vector
//{
//public:
//    T1 * arr;
//    int arrSize;
//    Vector(int s){
//        arrSize = s;
//        arr = new T1[arrSize];
//    }
//    T1 dotProduct(Vector &v){
//        T1 dP = 0;
//        for(int i=0; i<arrSize; i++){
//            dP+=this->arr[i]*v.arr[i];
//        }
//        return dP;
//    }
//};

//template with multiple parameters
template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(){} //akela parameterized constructor chalta nahi ahi na, isliye banana pdta yeh sahab kya karein mazboori hain
    myClass(T1 a, T2 b){
    data1 = a;
    data2 = b;
    }
    void display(){
    cout<<data1<<endl;
    cout<<this->data2<<endl; // this pointer is optional
    }
};

int main()
{
//    Vector <float> v1(3);
//    v1.arr[0]=4;
//    v1.arr[1]=3;
//    v1.arr[2]=1;
//
//    Vector <float> v2(3);
//    v2.arr[0]=1.5;
//    v2.arr[1]=0.1;
//    v2.arr[2]=1;
//
//    float d = v1.dotProduct(v2);
//    cout<<"Dot-Product: "<<d<<endl;

     myClass <int, char> obj1;
     obj1.data1 = 100;
     obj1.data2 = 't';
     obj1.display();

     myClass <char, double> obj2('c', 99.99);
     obj2.display();

    return 0;
}
