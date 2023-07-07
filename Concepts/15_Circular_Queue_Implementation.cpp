//Implementation of Circular Queue
#include<iostream>
using namespace std;

struct circularQueue
{
    int fp;
    int bp;
    int arrSize;
    int *arr;
};

bool isFull(circularQueue *q)
{
    if( (q->bp+1)%q->arrSize == (q->fp) ){
        cout<<"Queue is full."<<endl;
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty(circularQueue *q){
if(q->fp == q->bp){
    cout<<"Queue is empty."<<endl;
    return true;
}
else
{
    return false;
}
}

void enqueue (circularQueue *q, int data){
    if(isFull(q)){
         return;
    }
    else{
        q->bp = (q->bp+1)%q->arrSize;
        q->arr[q->bp] = data;
        cout<<"Enqueued: "<<q->arr[q->bp]<<endl;
        return;
     }
}

int dequeue (circularQueue *q)
{
    if(isEmpty(q)){
    return -1;
     }
    q->fp = (q->fp +1)%q->arrSize;
    return q->arr[q->fp];
}

int main()
{
    circularQueue *q = new ( struct circularQueue);
    q->fp = 0;
    q->bp = 0;
    q->arrSize =10;
    q->arr = new (int);

    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    enqueue(q,6);
    enqueue(q,7);
    enqueue(q,8);
    enqueue(q,9);
    enqueue(q,10);
    cout<<"Dequeued: "<<dequeue(q)<<endl;
    cout<<"Dequeued: "<<dequeue(q)<<endl;

    enqueue(q,10);
    enqueue(q,11);

    return 0;
}

