#include<stdio.h>
void main ()
{
int i = 89;
int *ptr ; int **ptr_ptr ;
ptr = &i; ptr_ptr = &ptr;
printf ("The value of i d %d\n", **ptr_ptr);
printf ("The address of i %u\n", *ptr_ptr);
printf ("The address of i %u\n", ptr);

//i = 89
//ptr = 990096    *ptr = i = 89
// ptr_ptr= 990092  **ptr_ptr = i = 89
// *( *( &ptr))= *ptr = i
}
