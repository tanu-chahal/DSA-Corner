//Pre-Order Traversal In Binary Tree
// Root -> Left Subtree -> Right Subtree
// Example - 7   [1 [5[][]] [2[][]] ]   [6 [] []] => 71526
/*
      7
     / \
    1   6
   / \
  5   2
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

void preOrder(struct Node * root){
    if (root!=NULL){
      printf("%d ",root->data);
      preOrder(root->left);
      preOrder(root->right);
    }
}
int main(){

   //Constructing the root node & children using function.
   struct Node * p = createNode(7);
   struct Node * p1 = createNode(1);
   struct Node * p2 = createNode(6);
   struct Node * p3 = createNode(5);
   struct Node * p4 = createNode(2);

   //Linking the child nodes to parent(i.e. root) node.
   p->left = p1;
   p->right= p2;

   //linking children of p1
   p1->left = p3;
   p1->right= p4;

   printf("Binary tree, after pre-order traversal: ");
   preOrder(p);
   printf("\nSuccessful!\n");
   return 0;
}
