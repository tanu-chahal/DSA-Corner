//Implementation of simple queue :- Runs Perfectly :)
#include<iostream>
using namespace std;

struct queueDS
{
    int fp;
    int bp;
    int arrSize;
    int *arr;
};

bool isFull(queueDS *q)
{
    if(q->bp == (q->arrSize-1)){
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty(queueDS *q){
if(q->fp == q->bp){
    return true;
}
else
{
    return false;
}
}

void showQueue(queueDS *q){
    for(int i= (q->fp+1); i<=(q->bp); i++){
        cout<<" "<<q->arr[i]<<" ";
    }
}


void enqueue (queueDS *q, int data){
    if(isFull(q)){
         cout<<"Queue is full. Can't enqueue new element."<<endl;
         return;
    }
    else{
        q->bp++;
        q->arr[q->bp] = data;
        cout<<"Enqueued: "<<q->arr[q->bp]<<endl;
        return;
     }
}

int dequeue (queueDS *q)
{
    if(isEmpty(q)){
    cout<<"Queue is empty. Can't dequeue element."<<endl;
    return -1;
     }
    int dequeued = q->arr[q->fp+1];
    q->fp++;
    return dequeued;
}

int main()
{
    queueDS *q = new ( struct queueDS);
    q->fp = -1;
    q->bp = -1;
    q->arrSize =10;
    q->arr = new (int);

    enqueue(q,4);
    enqueue(q,5);
    enqueue(q,6);
    enqueue(q,7);
    enqueue(q,8);
    enqueue(q,9);

    cout<<"Queue is: "<<endl;
    showQueue(q);

    cout<<"\nDequeued: "<<dequeue(q)<<endl;
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);

    cout<<"Queue is: "<<endl;
    showQueue(q);

    return 0;
}
