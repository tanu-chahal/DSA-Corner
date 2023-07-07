//Insertion & Deletion in Linked List

//Insertion Cases: Insert At the Beginning, Insert Between, Insert at the end & Insertion After a Node

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    };

void display(struct Node * ptr){
  while(ptr!=NULL){
    cout<<ptr->data<<endl;
    ptr = ptr->next;
  }
  delete ptr;
}

struct Node * insertAtBeginning(struct Node *head, int data){ //Case 1:
    struct Node *ptr = new (struct Node);
    ptr->next = head;
    ptr->data = data;
    return ptr;
};

void insertInBetween(struct Node *p,int index1,int index2, int data){ //Case 2:
    struct Node *ptr = new (struct Node);
    struct Node *newptr = new (struct Node);
    int i =1;
    while(p!=NULL){
       if(i==index1){
        ptr = p; //it is storing index1 element
        p = p->next; //it will store index2 element
        break;
       }
       p = p->next;
       i++;
    }

    newptr->data = data;
    newptr->next = p;
    ptr->next = newptr;
    return;
}

void insertAtEnd(struct Node *p, int data){ //Case 3:
    struct Node *ptr = new (struct Node);
    while(p->next!=NULL){
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return;
}

void insertAfterNode(struct Node *head, int index, int data){ //Case 4:
    struct Node *ptr = new (struct Node);
    struct Node *p = new (struct Node);
    int i=1;
     while(head!=NULL){
     if(i==index){
        p = head;
        head= head->next;
        break;
     }
     head = head->next;
    i++;
  }
    ptr->data=data;
    p->next = ptr;
    ptr->next = head;

     return;
}

void insertAtIndex(struct Node *p, int index, int data){ //Case 5:
    struct Node *ptr = new (struct Node);
    int i=1;
     while(i<index-1){
     if(p==NULL){
        cout<<"\nOops! Asked index doesn't exist.\n";
     }
    p = p->next;
    i++;
  }
    ptr->data=data;
    ptr->next = p->next;
    p->next =ptr;
    return;
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

head->data = 45;
head->next = second;

second->data = 56;
second->next = third;

third->data= 78;
third->next = fourth;

fourth->data = 90;
fourth->next = NULL;

cout<<"Before insertion our linked list is:"<<endl;
display(head);

head = insertAtBeginning(head,23);
cout<<endl<<"After insertion our linked list is:"<<endl;
display(head);

insertInBetween(head,3,4,100);
cout<<endl<<"After insertion in between third & fourth element, our linked list is:"<<endl;
display(head);

insertAtEnd(head,1000);
cout<<endl<<"After insertion at last position, our linked list is:"<<endl;
display(head);

insertAfterNode(head,3,100000);
cout<<endl<<"After insertion after third position, our linked list is:"<<endl;
display(head);

insertAtIndex(head,5,1);//Assuming index starting from 1 here
cout<<endl<<"After insertion at 5th position, our linked list is:"<<endl;
display(head);
return 0;
}
