//Insertion & Deletion in Circular Linked List
//Chalta hi ni ye :((
//Insertion Cases: Insert At the Beginning, Insert Between, Insert at the end & Insertion After a Node

#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node* next;
  };

  void display(struct Node* head){
      struct Node* ptr = new (struct Node);
      ptr =head;
  do{
    cout<<ptr->data<<endl;
    ptr = ptr->next;
  }while(ptr!=head);
  delete ptr;
  }

struct Node* insertAtBeginning(struct Node* head,int data){ //Case 1:
    struct Node* ptr = new (struct Node);
    ptr->data = data;
    struct Node* p = new (struct Node);
    p = head;
    do{
       p = p->next;
        //last element leke jaayenge
    }while(p->next!=head);
    ptr->next= p->next;
    p->next = ptr;
    return ptr;
}

void insertInBetween(struct Node* head,int index1,int index2, int data){ //Case 2:
    struct Node* ptr = new (struct Node);
    struct Node* p = new (struct Node);
    p=head;
    int i =1;
    do{
       if(i==index1){
            //Mr.p yaani index1 wale element ko leke laut jaayenge
        break;
       }
       p = p->next;
       i++;
    } while(p!=head);

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return;
}

/*void insertAtEnd(struct Node *head, string data){ //Case 3:
    struct Node *ptr = new (struct Node);
    struct Node *p = new (struct Node);
    p = head;
    do{
        p = p->next;
    } while(p!=head);

    ptr->data = data;
    p->next = ptr;
    ptr->next = head;
    return;
}

void insertAfterNode(struct Node *head, int index, string data){ //Case 4:
    struct Node *ptr = new (struct Node);
    struct Node *q = new (struct Node);

    int i=1;
     do{
     if(i==index){
    //Mr. q index wala jaayega yha se :D
        break;
     }
     q = q->next;
      i++;
     }while(q!=head);

    ptr->data=data;
    ptr->next = q->next;
    q->next = ptr;

     return;
}

void insertAtIndex(struct Node *head, int index, string data){ //Case 5:
    struct Node *ptr = new (struct Node);
    struct Node *p = new (struct Node);
    p = head;
    int i=1;
     while(i<index-1){
    p = p->next;
    i++;
  }
    ptr->data=data;
    ptr->next = p->next;
    p->next =ptr;
    return;
}
*/


int main(){
struct Node* head;
struct Node* second;
struct Node* third;
struct Node* fourth;

head = new (struct Node);
second = new (struct Node);
third = new (struct Node);
fourth = new (struct Node);

  head->data = 1;
  head->next= second;

  second->data= 2;
  second->next = third;

  third->data= 3;
  third->next = fourth;

  fourth->data= 4;
  fourth->next = head;

cout<<"Before insertion at first position our linked list is:"<<endl;
display(head);

cout<<endl<<"After insertion, our linked list is:"<<endl;
head = insertAtBeginning(head,5);
display(head);


insertInBetween(head,3,4,6);
cout<<endl<<"After insertion in between third & fourth element, our linked list is:"<<endl;
display(head);

/*insertAtEnd(head,"Arpit");
cout<<endl<<"After insertion at last position, our linked list is:"<<endl;
display(head);

insertAfterNode(head,3,"Ankush");
cout<<endl<<"After insertion after third position, our linked list is:"<<endl;
display(head);

insertAtIndex(head,5,"Naman");//Assuming index starting from 1 here
cout<<endl<<"After insertion at 5th position, our linked list is:"<<endl;
display(head);
*/
return 0;
}

