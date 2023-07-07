//In Order Traversal In Binary Tree
// Left Subtree -> Root -> Right Subtree
// Example - [   [ [ [[]3[]] 5 []]  1  [[]2[]] ]   7   [ [] 6 [[]9[]] ]   ] => 3512769
/*
      7
     / \
    1   6
   / \   \
  5   2   9
 /
3
*/

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

void inOrder(struct Node * root){
    if (root!=NULL){
      inOrder(root->left);
      printf("%d ",root->data);
      inOrder(root->right);
    }
}
int main(){

   //Constructing the root node & children using function.
   struct Node * p = createNode(7);
   struct Node * p1 = createNode(1);
   struct Node * p2 = createNode(6);
   struct Node * p3 = createNode(5);
   struct Node * p4 = createNode(2);
   struct Node * p5 = createNode(9);
   struct Node * p6 = createNode(3);

   //Linking the child nodes to parent(i.e. root) node.
   p->left = p1;
   p->right= p2;

   //linking children of p1
   p1->left = p3;
   p1->right= p4;

   p3->left = p6;
   p2->right= p5;

   printf("Binary tree, after in-order traversal: ");
   inOrder(p);
   printf("\nSuccessful!\n");
   return 0;
}


