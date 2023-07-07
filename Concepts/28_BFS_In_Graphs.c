//Implementing Breadth-First-Search Algorithm in Graphs with the help of queue.
/*
       0---1           Our Graph with 7 nodes.
       | \ |
       |  \|
       2---3
       \   /
        \ /
         4
        / \
       /   \
      5     6
*/
#include<stdio.h>
#include<stdlib.h>

struct Queue{
   int size;
   int f;
   int r;
   int * arr;
};

int isEmpty (struct Queue *q)
{
    if(q->r == q->f)
        return 1;
    return 0;
}

int isFull (struct Queue *q)
{
    if(q->r == q->size-1)
        return 1;
    return 0;
}

void enqueue (struct Queue *q, int data)
{
    if(isFull(q))
        printf("Queue is full!");
    else{
        q->r++;
        q->arr[q->r] = data;
        //printf("Enqueued element: %d\n", q->arr[q->r]);
    }
}

int dequeue (struct Queue *q)
{
    int a = -1;
    if(isEmpty(q))
        printf("Queue is empty!");
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct Queue q;
    q.size = 400;
    q.f = q.r = 0;
    q.arr = (int *) malloc(q.size * sizeof(int));

    //BFS Implementation
    int i = 6;
    int visited[7] = {0,0,0,0,0,0,0};
    int adjMat[7][7] = //graph representation using adjacency matrix
    {
        {0,1,1,1,0,0,0},
        {1,0,0,1,0,0,0},
        {1,0,0,1,1,0,0},
        {1,1,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };
    printf("%d ",i);
    visited[i] = 1;
    enqueue(&q, i); //enqueued i for exploration
    while(!isEmpty(&q))
    {
        int u = dequeue(&q);
        for(int j=0; j<7; j++){
           if(adjMat[u][j]==1 && visited[j]==0){
               printf("%d ",j);
               visited[j] = 1;
               enqueue(&q, j);
           }
        }
    }

    return 0;
}
