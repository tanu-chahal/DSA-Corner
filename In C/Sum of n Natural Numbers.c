//Program for sum of n natural numbers
#include<stdio.h>
void main()
{
    int i=0, n, sum = 0;

    printf ("Enter the Number : ");
    scanf ("%d\n", &n);

    while(i<n)
    {
        ++i;
        sum = sum + i ;
    }
     printf ("The sum of numbers (1 to %d) will be : %d\n",n, sum);

}
