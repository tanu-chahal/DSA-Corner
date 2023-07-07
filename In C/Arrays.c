
//Arrays input and sum of diagonal elements in square matrix
#include<stdio.h>
void main()
{
    int i,j,
    a[i][j],n;
    printf ("Enter the order of square matrix :");
    scanf ("%d\n", n);

    printf ("Enter the elements in the array");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf ("%d\n", &a[i][j]);
        }
    }
    printf ("The Element of array will be\n");
   for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf ("%d\t", &a[i][j]);
        }
    }
}
