//Depth First Search (DFS) Algorithm for graph traversal. Chalta hai :)
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

void DFS(int i)
{
    printf("%d ",i);
    visited[i]=1;
    for(int j=0; j<7; j++)
        if(adjMat[i][j]==1 && !visited[j])
            DFS(j);
}

int main()
{
  //DFS Implementation
    DFS(6); //starting traversal from 6 :)
    return 0;
}
