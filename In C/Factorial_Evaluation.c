//To calculate factorial of a number
#include <stdio.h>
void main()
{
    int n,i=1,factorial = 1;
    printf ("Enter the number : ");
    scanf ("%d\n", &n);

    while (i<=n)
    {
        factorial*=i; i++;
    }
    printf ("The factorial of %d is %d\n",n,factorial);
    //Using for loop
    factorial = 1;
    for (i=1;i<=n;i++)
    {
        factorial*=i;
    }
      printf ("The factorial of %d is %d\n",n,factorial);
      //Using do while loop
      factorial = 1;i = 1;
      do {
        factorial*=i; i++;
      }while (i<=n);
      printf ("The factorial of %d is %d\n",n,factorial);
}
