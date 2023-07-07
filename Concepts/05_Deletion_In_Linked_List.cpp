//deletion in Linked List

//deletion Cases: delete At the Beginning, delete Between, delete at the end & deletion After a Node

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

struct Node * deleteAtBeginning(struct Node *head){ //Case 1:
    struct Node *ptr = new (struct Node);
    ptr = head;
    head = head->next;
    delete ptr;
    return head;
};

void deleteInBetween(struct Node *p,int index1,int index3){ //Case 2:
    struct Node *ptr = new (struct Node);
    int i =1;
    while(p!=NULL){
       if(i==index1){
        ptr = p; //it is storing index1 element
        p = p->next; //it will store element to be deleted
        break;
       }
       p = p->next;
       i++;
    }
    ptr->next = p->next;
    delete p;
    return;
}

void deleteAtEnd(struct Node *p){ //Case 3:
    struct Node *ptr = new (struct Node);
    ptr = p;
    ptr =ptr->next;
    while(ptr->next!=NULL){
     p = p->next;
     ptr = ptr->next;//will end up at last node
    }
   p->next = NULL;
   delete ptr;
    return;
}

void deleteAfterNode(struct Node *p, int index){ //Case 4:
    struct Node *ptr = new (struct Node);
    int i=1;
     while(p!=NULL){
     if(i==index){
        ptr = p;
        p= p->next;
        break;
     }
     p = p->next;
    i++;
  }
    ptr->next = p->next;
    delete p;
    return;
}

void deleteAtIndex(struct Node *p, int index){ //Case 5:
    struct Node *ptr = new (struct Node);
    int i=1;
     while(i<index-1){
     if(p==NULL){
        cout<<"\nOops! Asked index doesn't exist.\n";
     }
    p = p->next; //at the end, it will be (index-1)th element
    i++;
  }
    ptr = p;
    p=p->next;
    ptr->next = p->next;
    delete p;
    return;
}

int main(){
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
struct Node *fifth;
struct Node *sixth;
struct Node *seventh;
struct Node *eightth;
struct Node *ninth;
struct Node *tenth;

head = new (struct Node);
second = new (struct Node);
third = new (struct Node);
fourth = new (struct Node);
fifth = new (struct Node);
sixth = new (struct Node);
seventh = new (struct Node);
eightth = new (struct Node);
ninth = new (struct Node);
tenth = new (struct Node);

head->data = 45;
head->next = second;

second->data = 56;
second->next = third;

third->data= 78;
third->next = fourth;

fourth->data = 90;
fourth->next = fifth;

fifth->data = 65;
fifth->next = sixth;

sixth->data = 79;
sixth->next = seventh;

seventh->data = 13;
seventh->next = eightth;

eightth->data = 99;
eightth->next = ninth;

ninth->data = 49;
ninth->next = tenth;

tenth->data = 10;
tenth->next = NULL;

cout<<"Before deletion our linked list is:"<<endl;
display(head);

head = deleteAtBeginning(head);
cout<<endl<<"After deletion our linked list is:"<<endl;
display(head);

deleteInBetween(head,1,3);
cout<<endl<<"After deletion in between first & third element, our linked list is:"<<endl;
display(head);

deleteAtEnd(head);
cout<<endl<<"After deletion at last position, our linked list is:"<<endl;
display(head);

deleteAfterNode(head,3);
cout<<endl<<"After deletion after third position, our linked list is:"<<endl;
display(head);

deleteAtIndex(head,4);//Assuming index starting from 1 here
cout<<endl<<"After deletion at 4th position, our linked list is:"<<endl;
display(head);
return 0;
}
