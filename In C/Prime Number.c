//To check whether a number is prime or not
#include<stdio.h>
void main()
{
    int n, i,prime = 1;
    printf("Enter a number : ");
    scanf ("%d\n", &n);

    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
           prime = 0;
            break ;
        }

    }
    if (prime == 0)
    {
         printf ("The number %d is not prime. \n",n);
    }
    else
    {
        printf ("The number %d is prime.\n",n);
    }
    // By Using while loop
    prime = 1; i = 2;
   while (i<n)
   {
       if (n%i==0)
       {
           prime = 0 ; break;
       }
   }
    if (prime == 0)
    {
         printf ("The number %d is not prime. \n",n);
    }
    else
    {
        printf ("The number %d is prime.\n",n);
    }
    //By Using Do While Loop
      prime = 1; i = 2;
    do {
        if (n%i==0)
        {
            prime = 0 ; break;
        }
    }while (i<n);
     if (prime == 0)
    {
         printf ("The number %d is not prime. \n",n);
    }
    else
    {
        printf ("The number %d is prime.\n",n);
    }
}
