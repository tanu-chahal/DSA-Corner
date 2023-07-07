//Program for multiplication table of a given number n
#include <stdio.h>
void main()
{
    int n, i = 0, table ,sum = 0 ;
    printf("Enter the number : ");
    scanf ("%d\n", &n);

    for (i=0; i<=10; i++)
    {
        table = n*i;
        sum+=table;
        printf ("%d * %d = %d\n", n,i,table);
    }
    // Multiplication table  in reverse order
    printf ("Reverse table of %d will be\n", n);
    for (i=10;i;i--)
    {
        table = n*i;
        printf("%d * %d = %d\n", n, i, table);
    }
        //For the sum of numbers in the table
        printf ("Sum will be %d\n", sum);
}
