#include<stdio.h>
#include<stdlib.h>

struct Heap {
  int capacity;
  int * arr;
  int size;
};

void swap(struct Heap * H, int a, int b){
    int temp= H->arr[a];
    H->arr[a] = H->arr[b];
    H->arr[b] = temp;
}

int isHeapEmpty(struct Heap * H)
{
    return (H->size==1);
}

int isHeapFull(struct Heap * H)
{
    return (H->size==H->capacity);
}

int isRoot(int i)
{
    return (i==1);
}

int getLastLeaf(struct Heap * H){
    if(isHeapEmpty(H)){
        printf("Heap is empty.\n");
        return -1;
    }
    return H->arr[H->size-1];
}

int parent(int i)
{
    return i/2;
}

int left(int i)
{
    return 2*i;
}

int right(int i)
{
    return (2*i + 1);
}

void bubbleUp(struct Heap * H, int i)
{
    if(isRoot(i))
        return;
    else if(H->arr[i] > H->arr[parent(i)]){
            swap(H,i,parent(i));
            bubbleUp(H,parent(i));
    }
}

void bubbleDown(struct Heap * H, int i)
{
    int max = i;
    int l = left(i);
    int r = right(i);
    if(l < H->size && H->arr[max] < H->arr[l])
        max = l;
    if(r < H->size && H->arr[max] < H->arr[r])
        max = r;

    if(max!=i){
       swap(H,i,max);
       bubbleDown(H,max);
    }
}

void heapify(struct Heap * H, int Arr[], int n) //n->size of Arr to be heapi-fied.
{
    if(n>H->capacity){
        printf("Array is larger than Heap. Can't be Heapified.\n");
        return;
    }
    for(int i=0; i<n; i++){
        H->arr[i+1] = Arr[i];  //first copying Arr elements in heap
        H->size++;
    }
    for(int i=n/2; i>0; i--)
        bubbleDown(H,i);   //then heapifying our heap

}
void insert(struct Heap * H, int data)
{
    if(isHeapFull(H)){
        printf("Heap full. Can't insert.\n");
        return;
    }
    H->arr[H->size]= data;
    int ind = H->size;
    H->size++;
    printf("Inserted %d\n", H->arr[ind]);
    bubbleUp(H,ind);
}

void deleteRoot(struct Heap * H)
{
    if(isHeapEmpty(H)){
        printf("Can't Delete Root! Heap is Empty.");
        return;
    }
    printf("Deleted Root %d\n",H->arr[1]);
    H->arr[1]=H->arr[H->size-1];
    H->size--;
    bubbleDown(H,1);
}

void deleteNode(struct Heap * H, int i)
{
    if(i>=H->size){
        printf("Node %d doesn't exist.", i);
        return;
    }
    printf("Deleted %d Node: %d\n", i, H->arr[i]);
    H->arr[i]=H->arr[H->size-1];
    H->size--;
    bubbleUp(H,i);
    bubbleDown(H,i);
}

void printHeap(struct Heap * H)
{
    printf("\nHeap:");
    for(int i = 1; i<H->size; i++){
        printf(" %d", H->arr[i]);
    }
    printf("\n");
}

int main()
{
    struct Heap * H = (struct Heap *)malloc(sizeof(struct Heap));
    H->capacity = 20;
    H->arr= (int *)malloc(H->capacity*sizeof(int));
    H->arr[0] = -1;
    H->size = 1;

//    insert(H, 23);
//    insert(H, 45);
//    insert(H, 16);
//    insert(H, 96);
//    insert(H, 20);
//    insert(H, 70);
//    insert(H, 83);
//    printHeap(H);
//
//    deleteRoot(H);
//    printHeap(H);
//
//    deleteNode(H,5);
//    printHeap(H);
//
//    deleteNode(H,2);
//    printHeap(H);

    int arr[5] = {66, 23, 890, 222, 90};
    printf("Array:");
    for(int i=0; i<5; i++)
        printf(" %d", arr[i]);
    printf("\n\nAfter Heapifying:\n");
    heapify(H,arr,5);
    printHeap(H);

    return 0;
}
