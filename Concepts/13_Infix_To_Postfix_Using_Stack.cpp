//Infix to postfix using stack
#include<iostream>
#include<stdlib.h>
using namespace std;

struct stackDS{
int sizeOfArr;
int top;
char *arr;
};

int stackTop(stackDS *st){
return st->arr[st->top];
}
bool isEmpty(stackDS *st){
if(st->top==-1){
    return true;
}
return false;
}

void push(stackDS *st, char ch){
if(st->top==(st->sizeOfArr-1)){
   cout<<"\nCan't push "<<ch<<"! Stack will overflow."<<endl;
   exit(0);
}
    st->top++;
    st->arr[st->top] = ch;
}

char pop(stackDS *st){
if(isEmpty(st)){
   cout<<"Can't pop! Stack is underflow."<<endl;
   exit(0);
}
    char op= st->arr[st->top];
    st->top--;
    return op;
}

int precedence(char ch){
int p;
switch (ch){
     case '+':
             p = 1;
             break;
     case '-':
             p = 1;
             break;
     case '*':
             p = 2;
             break;
     case '/':
             p = 2;
             break;
     default:
             cout<<"Contains invalid operator!"<<endl;
             p =-1;
}
return p;
}

int main(){
struct stackDS *st = new (struct stackDS);
st->sizeOfArr = 10;
st->top = -1;
st->arr = new (char);

string exp = "x+y-b*z+m/n";
string postExp ="";
int i;
 for(i=0; i<exp.length(); i++){
          if(exp[i]=='+'|| exp[i]=='-' || exp[i]=='*'|| exp[i]=='/'){
                cout<<"Found Operator"<<endl;
                if(st->top== -1){
                   push(st,exp[i]);
                }
                else{
                  while(st->top != -1 ){
                       if (precedence(exp[i]) > precedence(stackTop(st)) ){
                           push(st,exp[i]);
                           break;
                        }
                       else{
                          postExp +=pop(st);
                        }
                   }
                 }
                if(st->top== -1){
                   push(st,exp[i]);
                }
          }
         else{
                     postExp+= exp[i];
          }
}
while(st->top!=-1){
    postExp += pop(st);
}
cout<<exp<<" => Prefix Expression => "<<postExp<<endl;
return 0;
}
