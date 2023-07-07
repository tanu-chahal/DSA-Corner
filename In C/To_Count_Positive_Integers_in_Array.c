// To count the number of positive integers in an array
#include<stdio.h>

int count_numbers(int n);

int main()
{
    int n;
    int arr[n];
    printf("Enter the number of elements:");
    scanf("%d\n",&n);

 count_numbers(n);

return 0;
}

int count_numbers(int n)
{ int i,count=0; int arr[n];
 printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            count++;
        }
    }
   printf("The number of positive integers in the array is: %d\n",count);
}
