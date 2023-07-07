//Iterative Searching in a Binary Search Tree
/*
      5
     / \
    3   6
   / \   \
  1   4   9
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
      if(!isBST(root->left))
        return 0;

      if(prev!=NULL &&root->data <=prev->data)
        return 0;

      prev = root;

      return isBST(root->right);
    }
    else
        return 1;
}

struct Node * iterativeSearch(struct Node * root, int key){
    while(root!=NULL){
        if(key == root->data)
            return root;
        else if(key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return NULL;
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

   int key;
   printf("Enter the you want to search for: ");
   scanf("%d",&key);

   if(isBST(p))
      printf("\nSearching...\n");
   else{
      printf("\nCan't search, the given tree isn't a Binary Search Tree.\n");
      return 0;
   }

   struct Node * S = iterativeSearch(p,key);
   if(S!=NULL)
      printf("\n%d is present in the BST.", S->data);
   else
      printf("\n%d is not present in the BST.", key);

   printf("\nProgram Successfully Ended!\n");
   return 0;
}



