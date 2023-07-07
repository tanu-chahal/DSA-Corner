//Comparison of two pointer variables
#include<stdio.h>
void main()
{
    int a ,b;
    printf ("Enter two numbers :");
    scanf("%d %d\n", &a,&b);
    int *x=&a, *y=&b;
      printf("*x is %d\n", *x);
     printf("*y is %d\n", *y);//*x = a and x = &a
    if(x==y)
    {
        printf ("x and y contain same address %u\n", x);
    }
    else
    {
        printf("x and y doesn't contain same address x = %u and y = %u",x,y);
    }

}
