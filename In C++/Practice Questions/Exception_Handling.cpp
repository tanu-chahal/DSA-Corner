//Throwing Restrictions -> Program terminates abnormally
#include<bits/stdc++.h>
using namespace std;

void test(int x) throw(int, double)
{
    cout<<"Entered function"<<endl;
    if(x==0) throw 'x';              // char throw isn't allowed. programs terminates from here
    else if (x==1) throw 1;
    else if (x==-1) throw 1.0;
    else throw "Unknown";
    cout<<"End of function block/n"<<endl;
}
int main()
{
    try{
        cout<<"Testing Throwing Restrictions"<<endl;
        cout<<"\nx==0"<<endl;
        test(0);
        cout<<"\nx==1"<<endl;
        test(1);
        cout<<"\nx==-1"<<endl;
        test(-1);
        cout<<"\nx==2"<<endl;
        test(2);
    }
    catch(char c){
        cout<<"Caught a character"<<endl;
    }
    catch (int i){
        cout<<"Caught an integer"<<endl;
    }
    catch (double d){
        cout<<"Caught a double"<<endl;
    }
    catch (...){
        cout<<"Caught all exceptions"<<endl;
    }
    cout<<"End of try-catch block"<<endl;
    return 0;
}
