#include <iostream>
using namespace std;

class Shape {
public:
    Shape(){
    cout<<"Shape Constructor Called."<<endl;
    }
    virtual ~Shape(){
    cout<<"Shape Destructor Called."<<endl;
    }
};

class Circle: public Shape
{
public:
    Circle(){
        cout<<"Circle Constructor Called."<<endl;
    }
    ~Circle(){
    cout<<"Circle Destructor Called."<<endl;
    }
};

int main()
{
    Shape * ptr = new Circle();
    delete ptr;
    return 0;
}
