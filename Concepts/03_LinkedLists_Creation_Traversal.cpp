//Creation & Traversal in Linked Lists
#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node * next;
  };

  void display(struct Node * ptr){
  while(ptr!=NULL){
    cout<<ptr->data<<endl;
    ptr = ptr->next;
  }
  delete ptr;
  }

  int main(){
  struct Node *head;
  struct Node *second;

  head = new (struct Node);
  second = new (struct Node);

  head->data = 67;
  head->next= second;

  second->data= 45;
  second->next = NULL;
 display(head);
  return 0;
  }
