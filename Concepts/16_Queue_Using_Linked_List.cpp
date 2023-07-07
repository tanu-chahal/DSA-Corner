//Implementing Queue using Linked List
#include<iostream>
using namespace std;

struct Queue{
int data;
struct Queue *next;
};
struct Queue *f = NULL;
struct Queue *r = NULL;

bool isEmpty(){
    if(r==NULL && f==NULL){
        cout<<"The queue is empty."<<endl;
        return true;
    }
    else{
        return false;
    }
}

bool isFull(Queue *ptr){
    if(ptr==NULL){
        cout<<"The queue is full."<<endl;
        return true;
    }
    else{
        return false;
    }
}

void enqueue(int val)
{
    Queue *ptr = new (Queue);
    ptr->data = val;
    if(isFull(ptr)){
        return;
    }
    else if(f==NULL && r==NULL){
        ptr->next = NULL;
        f = ptr;
        r = ptr;
        cout<<"Enqueued: "<<f->data<<endl;
        return;
    }
    else{
        r->next = ptr;
        ptr->next = NULL;
        r = ptr;
        cout<<"Enqueued: "<<r->data<<endl;
        return;
    }
}

int dequeue()
{
    Queue *ptr = f;
    int val = -1;
    if(isEmpty()){
        return val;
    }
   else{
        f = f->next;
        val = ptr->data;
        delete ptr;
        return val;
    }
}

int main(){
enqueue(5);
enqueue(10);
enqueue(15);
enqueue(20);
enqueue(25);
cout<<"Dequeued: "<<dequeue()<<endl;
cout<<"Dequeued: "<<dequeue()<<endl;
cout<<"Dequeued: "<<dequeue()<<endl;
return 0;
}
