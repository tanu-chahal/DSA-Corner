//Doing Insertion & Rotation in AVL Tree
/*
      5                    3
     / \                  / \
    3   6                2   4
   / \          LL      /     \
  2   4        --->    1       6
 /        Right Rotation
1

*/

#include<stdio.h>
#include<malloc.h>

struct Node {
   int data;
   struct Node * left;
   struct Node * right;
   int height;
};

struct Node * createNode(int data){
   struct Node * N; //creating a node pointer
   N = (struct Node *)malloc(sizeof(struct Node)); //allocating memory to it in heap
   N->data = data; //setting given data
   N->left = NULL; //making left and right children null
   N->right= NULL;
   N->height = 1;
   return N; //returning the node
};

int getHeight(struct Node * node)
{
    if(node==NULL)
        return 0;
    return node->height;
}

int max( int a, int b)
{
   return a>b?a:b;
}

int getBalanceFactor(struct Node * node)
{
    if(node==NULL)
        return 0;

    return getHeight(node->left)- getHeight(node->right);
}

struct Node * rightRotate(struct Node * y)
{
    struct Node * x = y->left;
    struct Node * T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(getHeight(y->right), getHeight(y->left))+1;
    x->height = max(getHeight(x->right), getHeight(x->left))+1;
    return x;
}

struct Node * leftRotate(struct Node * x)
{
    struct Node * y = x->right;
    struct Node * T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(getHeight(y->right), getHeight(y->left))+1;
    x->height = max(getHeight(x->right), getHeight(x->left))+1;
    return y;
}

struct Node * Insert(struct Node * root, int data){
    if(root==NULL)
        return (createNode(data));

    if(data < root->data)
        root->left = Insert(root->left,data);
    else if(data > root->data)
        root->right = Insert(root->right, data);
    else
        return root;

    root->height = 1+ max(getHeight(root->left), getHeight(root->right));
    int bf = getBalanceFactor(root);

    //left left case
    if(bf>1 && data < root->left->data){
       root = rightRotate(root);
    }
    //right right case
    if(bf<-1 && data > root->right->data){
       root = leftRotate(root);
    }
    //left right case
    if(bf>1 && data > root->left->data){
       root->left = leftRotate(root->left);
       root = rightRotate(root);
    }
    //right left case
    if(bf<-1 && data < root->right->data){
       root->right = rightRotate(root->right);
       root = leftRotate(root);
    }

    return root;
}

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

int main(){

   //Constructing the root node p & children using function.
   struct Node * p = NULL;
   p = Insert(p,5);
   p = Insert(p,3);
   p = Insert(p,6);
   p = Insert(p,2);
   p = Insert(p,4);
   p = Insert(p,1);

   if(isBST(p))
      printf("Yes, the given tree is a Binary Search Tree.\n");
   else
      printf("No, the given tree isn't a Binary Search Tree.\n");

   printf("\nProgram Successfully Ended!\n");
   return 0;
}


