//Checking if a Binary Tree is Binary Search Tree or Not.
/*
      5
     / \
    3   6
   / \   \
  1   4   9

  To be a BST 3 conditions must satisfy:
  - All the left children of the parent should be smaller than the parent.
  - All the right children of the parent should be larger than the parent.
  - Each left & right subtree should also be a BST.
  - No duplicate node should be there.

  How to check?
  - The in-order traversal of a BST is an ascending order array. So check it.
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

int isBST(struct Node * root){
    static struct Node *prev = NULL; //The parent of the node which we're right now checking.
    if (root!=NULL){
      if(!isBST(root->left)) //if left subtree isn't BST return 0
        return 0;

      if(prev!=NULL &&root->data <=prev->data) //If parent exist, & parent data is greater than current root(which is a right child) return 0
        return 0;

      prev = root; //set current root as parent for next call
      printf("%d ", root->data);

      return isBST(root->right);
    }
    else
        return 1;
}

int main(){

   //Constructing the root node & children using function.
   struct Node * p = createNode(5);
   struct Node * p1 = createNode(3);
   struct Node * p2 = createNode(6);
   struct Node * p3 = createNode(1);
   struct Node * p4 = createNode(4);
   struct Node * p5 = createNode(9);

   //Linking the child nodes to parent node.
   p->left = p1;
   p->right= p2;
   p1->left = p3;
   p1->right= p4;
   p2->right= p5;

   if(isBST(p))
      printf("\nYes, the given tree is a Binary Search Tree.\n");
   else
      printf("\nNo, the given tree isn't a Binary Search Tree.\n");

   printf("\nProgram Successfully Ended!\n");
   return 0;
}


