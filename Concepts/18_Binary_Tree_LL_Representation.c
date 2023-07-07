//Representing Binary Tree Using Linked Lists (Linked Representation of Binary Tree)
#include<stdio.h>
#include<malloc.h>

struct Node {
   int data;
   struct Node * left;
   struct Node * right;
};

struct Node * createNode(int data){
   struct Node * N; //creating a node pointer
   N = (struct Node *)malloc(sizeof(struct Node)); //allocating memory to it in heap
   N->data = data; //setting given data
   N->left = NULL; //making left and right children null
   N->right= NULL;
   return N; //returning the node
};

int main(){
   /*
   //Constructing the root node manually.
   struct Node * p;
   p = (struct Node *)malloc(sizeof(struct Node));
   p->left = NULL;
   p->right= NULL;

   //Constructing the left child node.
   struct Node * p1;
   p1 = (struct Node *)malloc(sizeof(struct Node));
   p1->left = NULL;
   p1->right= NULL;

   //Constructing the right child node.
   struct Node * p2;
   p2 = (struct Node *)malloc(sizeof(struct Node));
   p2->left = NULL;
   p2->right= NULL;
   */

   //Constructing the root node & children using function.
   struct Node * p = createNode(2);
   struct Node * p1 = createNode(1);
   struct Node * p2 = createNode(4);

   //Linking the child nodes to parent(i.e. root) node.
   p->left = p1;
   p->right= p2;

   //making children of p1
   struct Node * p3 = createNode(2);
   struct Node * p4 = createNode(3);
   p1->left = p3;
   p1->right= p4;

   //making right child of p2
   struct Node * p6 = createNode(6);
   p2->right= p6;

   printf("Successful!\n");
   return 0;
}
