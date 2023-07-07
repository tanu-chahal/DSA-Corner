// Arithmetic in Pointers
#include<stdio.h>
void main()
{
    int a = 8,b = 9;
    int *x = &a, *y = &b;
    printf("The value of x = &a is %u\n", x);
    printf("The increment in x= &a is %u\n ",++x);
    printf("The value of y = &b is %u\n ", y);
    printf ("The value of x-y is %u\n", x-y);
}
