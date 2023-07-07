#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Structure to represent a node in the heap
struct MinHeapNode {
    int data; // The data stored in the node
};

// Structure to represent the heap
struct MinHeap {
    int size; // The current size of the heap
    int capacity; // The maximum capacity of the heap
    struct MinHeapNode ** arr;// An array to store the nodes in the heap
};

// Function to create a new node in the heap
struct MinHeapNode* createNode(int data) {
    struct MinHeapNode * N = (struct MinHeapNode *)malloc(sizeof(struct MinHeapNode));
    N->data = data;
    return N;
}

// Function to create a new heap
struct MinHeap* createMinHeap(int capacity) {
    struct MinHeap * H = (struct MinHeap *)malloc(sizeof(struct MinHeap));
    H->size = 0;
    H->capacity = capacity;
    H->arr = (struct MinHeapNode **)malloc(capacity * sizeof(struct MinHeapNode ));
    H->arr[0] = createNode(0);
    H->size++;
    return H;
}

// Function to swap two nodes in the heap
void swapNodes(struct MinHeapNode** a, struct MinHeapNode** b) {
    struct MinHeapNode* t = *a;
    *a = *b;
    *b = t;
}

// Function to heapify a subtree rooted at index i
void minHeapify(struct MinHeap* mH, int i) {
    int smallest = i;
    int l = 2*i;
    int r = l+1;


    // If the left child is smaller than the current node, update smallest
    if(l<mH->size && mH->arr[smallest]->data> mH->arr[l]->data)
        smallest = l;

    // If the right child is smaller than the current node, update smallest
    if(r<mH->size && mH->arr[smallest]->data> mH->arr[r]->data)
        smallest = r;

    // If smallest is not the current node, swap the nodes and recursively heapify the affected subtree
    if(smallest!=i){
      swapNodes(&mH->arr[smallest], &mH->arr[i]);
      minHeapify(mH,smallest);
    }
}

// Function to extract the minimum element from the heap
struct MinHeapNode* extractMin(struct MinHeap* mH) {
    if(mH->size == 1)
        return mH->arr[0];
    // Store the root node
    struct MinHeapNode * root = mH->arr[1];

    // Replace the root node with the last node
    struct MinHeapNode * lastN = mH->arr[mH->size-1];
    mH->arr[1]= lastN;

    // Reduce the size of the heap
    mH->size--;

    // Heapify the root node
    minHeapify(mH, 1);

    return root;
}

// Function to insert a new element into the heap
void insertMinHeap(struct MinHeap* mH, int data) {
    // If the heap is full, return
    if(mH->size >= mH->capacity){
        printf("Heap Full! Can't insert %d \n",data);
        return;
    }

    // Create a new node for the element
    struct MinHeapNode * N = createNode(data);

    // Insert the new node at the end of the heap
    int i = mH->size;
    mH->arr[i] = N;

    // Fix the min heap property if it is violated
    while(i!=1 && mH->arr[i/2]->data > mH->arr[i]->data){
        swapNodes(&mH->arr[i], &mH->arr[i/2]);
        i/=2;
    }
    // Increase the size of the heap
    mH->size++;
}

// Function to print the elements in the heap
void printMinHeap(struct MinHeap* mH) {
    printf("Binary Min-Heap: ");
    for(int i=1; i < mH->size; i++){
        printf("%d ", mH->arr[i]->data);
    }
    printf("\n");
}

// Driver function to test the implementation
int main() {
 struct MinHeap * mH = createMinHeap(10);
 insertMinHeap(mH, 5);
 insertMinHeap(mH, 8);
 insertMinHeap(mH, 2);
 insertMinHeap(mH, 90);
 insertMinHeap(mH, 1);
 printMinHeap(mH);
 struct MinHeapNode * min = extractMin(mH);
 printf("Min-Element: %d\n", min->data);
 printMinHeap(mH);
 return 0;
}

