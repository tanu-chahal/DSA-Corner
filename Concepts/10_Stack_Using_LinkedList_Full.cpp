// Creation & implementation of stack using linked lists
//Incomplete
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
    int data;
   struct Node *next;
};

bool isEmpty(struct Node *top){
if(top==NULL){
    return true;
}
else{
    return false;
}
}

bool isFull(){
struct Node *newN = new (struct Node);
if(newN == NULL){
    return true;
}
else{
    return false;
}
}

struct Node * push(struct Node *top, int data){
    if(isFull()){
        cout<<"Error! Stack Overflow."<<endl;
        return top;
    }
    else{
        struct Node *newN = new (struct Node);
        newN->data = data;
        newN->next = top;
        top = newN;
        cout<<"Pushed: "<<top->data<<endl;
        return top;
}
}

int pop(struct Node **top){
if(isEmpty(*top)){
    cout<<"Error! Stack Underflow"<<endl;
    exit(0);
}
 struct Node *newN = *top;
 *top = (*top)->next;
 int x = newN->data;
 delete newN;
 return x;
}


int main(){
struct Node *top = NULL;
top = push(top,1);
top = push(top,2);
top = push(top,3);
top = push(top,4);
top = push(top,5);
top = push(top,6);

cout<<"Popped: "<<pop(&top)<<endl;
cout<<"Popped: "<<pop(&top)<<endl;
cout<<"Popped: "<<pop(&top)<<endl;
cout<<"Popped: "<<pop(&top)<<endl;
cout<<"Popped: "<<pop(&top)<<endl;

top = push(top,100);
top = push(top,200);
top = push(top,300);

return 0;
}
