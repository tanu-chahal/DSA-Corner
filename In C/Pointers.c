// To make a no. ten times by using pointers and call by reference
#include<stdio.h>

 int tenTimes(int *a); //function prototype

 int main(){
 int i ;
 printf("Enter any number :");
 scanf("%d\n", &i);
 printf ("The ten times value of %d is %d\n ",i, tenTimes(&i));
 return 0 ;
 }

 int tenTimes(int *a )
 {
   int result = 10* (*a);
   return result;
 }
