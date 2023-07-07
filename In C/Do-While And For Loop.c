//To print n natural numbers using do while and for loop
#include <stdio.h>
void main()
{
    int i = 0 , n ;

    printf ("Enter the No. of Natural Numbers :");
    scanf("%d\n", &n);

    printf("The Numbers will be\n");
    do { ++i ;
    printf ("%d\n", i);
    } while(i<n);
    /* ++i = 1 ,1<5
    ++i = 2 , 2<5
    ++i = 3 , 3<5
    ++i = 4 , 4<5
    ++i = 5, 5<5 -- False */

    //For loop For printing n natural numbers
    for(i=0; i<n; i++)
    {
        printf ("The Number is : %d\n", i+1);
    }
 // To Print Numbers in Reverse Order
 printf ("The Reverse Order will be \n");
 for (i= n; i;i--)
 {
     printf ("%d\n", i);
 }
}
