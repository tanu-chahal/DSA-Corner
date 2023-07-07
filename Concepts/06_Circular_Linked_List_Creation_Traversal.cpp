//Creation & Traversal in Circular Linked Lists
#include<iostream>
#include<string>
using namespace std;

struct Node{
  string data;
  struct Node *next;
  };

  void display(struct Node *head){
      struct Node *ptr = new (struct Node);
      ptr =head;
  do{
    cout<<ptr->data<<endl;
    ptr = ptr->next;
  }while(ptr!=head);
  delete ptr;
  }

  int main(){
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;
  head = new (struct Node);
  second = new (struct Node);
  third = new (struct Node);
  fourth = new (struct Node);

  head->data = "Tanu";
  head->next= second;

  second->data= "Sahil";
  second->next = third;

  third->data= "Tanvi";
  third->next = fourth;

  fourth->data= "Tanish";
  fourth->next = head;

 display(head);
  return 0;
  }
