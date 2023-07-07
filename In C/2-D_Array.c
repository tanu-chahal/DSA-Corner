// 2-D Array with Display Function
#include<stdio.h>
void display(int n,int m);
void main()
{
    int n,m;
    printf("Enter the Number of Rows:");
    scanf("%d\n", &n);
   printf("Enter the Number of Columns:");
    scanf("%d\n", &m);
    display(n,m);
}
void display(int n,int m)
{
    int i,j;
    int arr[n][m];
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
        printf("The elements in the array are\n [\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("{%d}\t",arr[i][j]);
        }
        printf("\n");
    } printf("]\n");
}
