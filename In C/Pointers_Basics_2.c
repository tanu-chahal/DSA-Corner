// To check passing arguments in call by value does not change the value in main function
#include<stdio.h>
int fun(int a);
void main()
{
    int i= 2;
    printf ("The value of i before calling the function : Before - %d\n",i);
    fun(i);
     printf ("The value of i after calling the function : After - %d\n",i);
}
int fun(int a)
{
    int result = 10*a;
    return result;
}
