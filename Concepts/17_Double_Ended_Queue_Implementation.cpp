//Double-ended Queue implementation using array=> Runs Perfectly :)
#include<iostream>
using namespace std;

struct DBQueue{
    int fp;
    int bp;
    int arrSize;
    int *arr;
};
DBQueue *q = new (struct DBQueue);

void showQueue(){
    for(int i= (q->fp+1); i<=(q->bp); i++){
        cout<<" "<<q->arr[i];
    }
    cout<<endl;
}

bool isEmpty(){
    if(q->fp == q->bp){
        cout<<"The DB Queue is empty."<<endl;
        return true;
    }
    else{
        return false;
    }
}

bool isFull(){
    if(q->bp == (q->arrSize-1)){
        cout<<"The DB Queue is full from Rear Side."<<endl;
        return true;
    }
    else{
        return false;
    }
}

void enqueueF(int data){
    if(q->fp==-1){
        cout<<"No space available to insert from front."<<endl;
        return;
    }
    q->arr[q->fp]= data;
    cout<<"Enqueued from F: "<<q->arr[q->fp]<<endl;
    q->fp--;
    return;
}

void enqueueR(int data){
    if(isFull()){
        return;
    }
    q->bp++;
    q->arr[q->bp]= data;
    cout<<"Enqueued from R: "<<q->arr[q->bp]<<endl;
    return;
}

int dequeueF(){
    int data =-1;
    if(isEmpty()){
        return data;
    }
    data = q->arr[q->fp+1];
    q->fp++;
    return data;
}

int dequeueR(){
    int data =-1;
    if(q->bp==-1){
        return data;
    }
    data = q->arr[q->bp];
    q->bp--;
    return data;
}

int main(){
q->fp = q->bp = -1;
q->arrSize = 10;
q->arr = new int;

enqueueR(101);
enqueueR(102);
enqueueR(103);

cout<<"DB Queue is: ";
showQueue();

cout<<"Dequeued from F: "<<dequeueF()<<endl;
cout<<"Dequeued from F: "<<dequeueF()<<endl;
cout<<"Dequeued from F: "<<dequeueF()<<endl;
enqueueF(7);
enqueueF(8);
enqueueF(9);

cout<<"Dequeued from R: "<<dequeueR()<<endl;
enqueueR(21);
enqueueR(22);
enqueueR(23);

cout<<"DB Queue is: ";
showQueue();
return 0;
}
