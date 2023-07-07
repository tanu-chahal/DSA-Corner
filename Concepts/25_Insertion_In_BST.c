//Insertion in a Binary Search Tree
/*
      5
     / \
    3   7
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
      printf("%d ", root->data);

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
           else{
                root = root->left;
           }
        }
        else{
           if(root->right==NULL){
                root->right = N;
                printf("%d is inserted as the right child of %d.\n",root->right->data,root->data);
                return N;
           }
          else{
                root = root->right;
          }
        }
    }
    printf("Inserted Root: %d\n", N->data);
    return N;
}

int main(){

   //Constructing the root node & children.
   struct Node * p = Insert(NULL,5);
   struct Node * p1= Insert(p,3);
   struct Node * p2= Insert(p,7);
   struct Node * p3= Insert(p,1);
   struct Node * p4= Insert(p,4);
   struct Node * p5= Insert(p,9);

   if(isBST(p))
      printf("\nIs BST\n");
   else{
      printf("\nNot aBST\n");
   }

   printf("\nTree: ");
   inOrder(p);
   printf("\n");

   struct Node * p6= Insert(p,2);
   struct Node * p7= Insert(p,6);

   printf("\nTree: ");
   inOrder(p);
   printf("\n");

   if(isBST(p))
      printf("\nIs BST\n");
   else{
      printf("\nNot a BST.\n");
   }

   return 0;
}



