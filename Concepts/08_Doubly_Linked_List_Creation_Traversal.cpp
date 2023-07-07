//Creation & Traversal in Doubly Linked List
#include<iostream>
using namespace std;

struct Node{
   struct Node *prev;
   int data;
   struct Node *next;
   };

void display(struct Node *head){
    struct Node* p = new (struct Node);
    p=head;
while(p!=NULL){
    cout<<p->data<<endl;
    p=p->next;
}
 return;
}

void revDisplay(struct Node *last){
    struct Node* p = new (struct Node);
    p=last;
while(p!=NULL){
    cout<<p->data<<endl;
    p=p->prev;
}
 return;
}

int main(){
struct Node* head = new (struct Node);
struct Node* second = new (struct Node);
struct Node* third = new (struct Node);
struct Node* fourth = new (struct Node);
struct Node* fifth = new (struct Node);

head->prev = NULL;
head->data= 1;
head->next = second;

second->prev = head;
second->data= 2;
second->next = third;

third->prev = second;
third->data= 3;
third->next = fourth;

fourth->prev = third;
fourth->data= 4;
fourth->next = fifth;

fifth->prev = fourth;
fifth->data= 5;
fifth->next = NULL;

cout<<"Displaying our Doubly LI:"<<endl;
display(head);
cout<<"\nDisplaying our Doubly LI:"<<endl;
revDisplay(fifth);
return 0;
}
