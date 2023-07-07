//A program to create and store data in an array dynamically
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,n;
    printf("Enter the no. of integers you want to store: ");
    scanf("%d", &n); fflush(stdin);
    ptr = (int *) malloc(n*sizeof(int));
    //Can also be done by using calloc,
    // the only difference between calloc and malloc is calloc store default value as 0 while malloc doesn't
    // ptr= (int*) calloc(n,sizeof(int));

    for(int i=0;i<n;i++)
    {
        printf("\nEnter the element number %d: ",i+1);
        scanf("%d", &ptr[i]); fflush(stdin);
    }
     for(int i=0;i<n;i++)
    {
        printf("\nThe element number %d is: %d\n ",i+1,ptr[i]);
    }
    return 0;
}
