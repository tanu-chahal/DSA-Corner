//Deletion in a Binary Search Tree
/*
      5
     / \
    3   7
   / \   \
  1   4   9

  3 Cases are there:
  - Delete a leaf node
  - Delete a non-leaf node
  - Delete root node
*/

#include<stdio.h>
#include<stdlib.h>

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

void inOrder(struct Node * root){
    if (root!=NULL){
      inOrder(root->left);
      printf("%d ",root->data);
      inOrder(root->right);
    }
}

struct Node * Insert(struct Node * root, int data){
    struct Node * N = createNode(data);

    while(root!=NULL){
        if(N->data < root->data){
           if(root->left==NULL){
                root->left = N;
                printf("%d is inserted as the left child of %d.\n",N->data,root->data);
                return N;
           }
           else
                root = root->left;
        }
        else{
           if(root->right==NULL){
                root->right = N;
                printf("%d is inserted as the right child of %d.\n",N->data,root->data);
                return N;
           }
          else
                root = root->right;
        }
    }
    return N;
}

struct Node * inOrderPredecessor (struct Node * root)
{
   if(root->left!=NULL)
   root = root->left; //make first left child as root if it exist

   while(root->right!=NULL)
         root = root->right; //then make right most child of first left child as root

   return root;
}

struct Node * Delete(struct Node * root, int key)
{
  struct Node * iPre;

  if(root==NULL)
        return NULL;

  //If only root is there delete it.
  if(root->left==NULL && root->right==NULL && root->data==key){
        free(root);
        return NULL;
  }
  // Search for the node to be deleted.
  if(key < root->data)
        root->left = Delete(root->left, key);
  else if(key > root->data)
        root->right = Delete(root->right, key);
  // Delete Strategy - when node is found.
  else{
    iPre = inOrderPredecessor(root);
    printf("iPre: %d\n", iPre->data);
    root->data = iPre->data; //replace the root with inOrderPredecessor
    root->left = Delete(root->left, iPre->data); //then delete the iPredecessor from left subtree - finish duplicacy
  }

  return root;
}

int main(){

   int key;
   //Constructing the root node & children using function.
   struct Node * p = createNode(5);
   struct Node * p1 = createNode(3);
   struct Node * p2 = createNode(7);
   struct Node * p3 = createNode(1);
   struct Node * p4 = createNode(4);
   struct Node * p5 = createNode(9);
   //Linking the child nodes to parent node.
   p->left = p1;
   p->right= p2;
   p1->left = p3;
   p1->right= p4;
   p2->right= p5;

   printf("BST initially, ");
   inOrder(p);

   printf("\nEnter the you want to delete: ");
   scanf("%d",&key);

   if(isBST(p))
      printf("\nDeleting...\n");
   else{
      printf("\nCan't delete, the given tree isn't a Binary Search Tree.\n");
      return 0;
   }

   struct Node * temp = Delete(p,key);
   printf("\n%d Successfully Deleted!\n", key);
   printf("\nBST after deletion: ");
   inOrder(p);
   return 0;
}



