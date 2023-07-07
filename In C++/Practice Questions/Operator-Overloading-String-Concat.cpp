#include<iostream>
using namespace std;

class Str
{
    string s;
public:
    Str(){
//        cout<<"Default-constructor called."<<endl;
        }
    Str(string st){
//    cout<<"Parameterized-constructor called."<<endl;
    s =st;
    }

    Str(Str &obj){ //& is mandatory in copy constructor, got it?
//    cout<<"Copy-constructor called."<<endl;
    s =obj.s;
    }

    string operator + (Str obj){ //here also for creating Str obj copy constructor is called, I just noticed.
//    cout<<"Member Called."<<endl;
    return (this->s + obj.s);
    }

    friend string operator+(string st1, Str obj);
};

string operator+(string st1, Str obj){ //& here too, for creating Str obj copy constructor is called.
//cout<<"Friend Called."<<endl;
return (st1 + obj.s);
}

int main()
{
    Str o1("tanu");
    Str o2("Chahal");
    Str o3 = o2;
    string st1 = o1+o2; //o1.operator+(o2) is invoked automatically
    cout<<st1<<endl;
    string st2 = "tn"+o3; //operator+("tn",o3) is invoked by the compiler
    cout<<st2<<endl;
    return 0;
}
