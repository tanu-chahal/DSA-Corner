//Creation and Implementation Of Stack

#include<iostream>
using namespace std;

struct stackDS{
int sizeOfArr;
int top;
int *arr;
};

int stackState(struct stackDS *ptr){
if(ptr->top==-1){
    return -1;
}
else if(ptr->top==(ptr->sizeOfArr-1)){
    return 1;
}
else {return 0; }

}

int peek(stackDS *st,int i){
if(stackState(st)==-1 || (st->top-i+1<0)){
   cout<<"The stack is empty! Can't peek element at "<<i<<endl;
    return -1;
}
else{
     return st->arr[st->top-i+1];
    }
}

int push(stackDS *st, int element){
if(stackState(st)==1){
   cout<<"\nCan't push "<<element<<"! Stack will overflow."<<endl;
    return -1;
}
else{
    st->top++;
    st->arr[st->top] = element;
    return st->arr[st->top];
}
}

int pop(stackDS *st){
if(stackState(st)==-1){
   cout<<"Can't pop! Stack is underflow."<<endl;
    return -1;
}
else{
        int val = st->arr[st->top];
    st->top--;
    return val;
}
}

int stackTop(stackDS *st){
return st->arr[st->top];
}

int stackBottom(stackDS *st){
return st->arr[0];
}

int main(){
struct stackDS *st = new (struct stackDS);
st->sizeOfArr = 10;
st->top = -1;
st->arr = new (int);

cout<<"\nPushed:"<<endl;
cout<<push(st,11)<<" ";
cout<<push(st,22)<<" ";
cout<<push(st,33)<<" ";
cout<<push(st,44)<<" ";
cout<<push(st,55)<<" ";
cout<<push(st,66)<<" ";
cout<<push(st,77)<<" ";
cout<<push(st,88)<<" ";
cout<<push(st,99)<<" ";
cout<<push(st,1010)<<" ";
cout<<push(st,1111)<<" ";

cout<<"\nPopped: "<<pop(st)<<endl;
cout<<"Our stack is:"<<endl;
for(int i=1;i<=st->top+1;i++){
    cout<<peek(st,i)<<" ";
}
cout<<"\nTopmost element is: "<<stackTop(st)<<endl;
cout<<"\nBottom element is: "<<stackBottom(st)<<endl;
/*
switch (stackState(st)){
case -1:
   cout<<"\nThe stack is empty!"<<endl;
   break;
case 0:
    cout<<"\nThe stack contains some data."<<endl;
    break;
case 1:
    cout<<"\nThe stack is full!"<<endl;
    break;
default:
    cout<<"\nCan't read state of stack!! Some error occurred :(("<<endl;
    break;
    }
*/

return 0;

}

