//Printing table of multiple numbers using 2-D Array
#include<stdio.h>

int print_table(int *multable, int num, int m);

int main()
{
    int i,j,x,multable[i][j],num,n,arr[x],m;

    printf("Enter how many tables you want:");
    scanf("%d",&n);

     printf("You want each table to run up to the multiple:");
    scanf("%d",&m);

    printf("You want the table of:\n");
    for(x=0;x<n;x++)
    {
      scanf("%d\t",&arr[x]);
    }


         for(x=0;x<n;x++)
        {
          num = arr[x];
          print_table(multable[i],num,m);
        }


}

int print_table(int *multable,int num,int m)
{   int i;

     printf("The table of %d is:\n",num);
    for(i=0;i<m;i++)
    {
        printf("%d x %d = %d\n",num,i+1,num*(i+1));
    }
   printf("*************************\n");
}
