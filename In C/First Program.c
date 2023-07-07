// Simple interest calculation

#include <stdio.h>

int main()

{
  int p,n;
  float r,si;
  printf ("Enter values of p, n, r");

  //formula of simple interest
  si=p*n*r/100;
  scanf("%d,%d,%f,%f",&p,&n,&r);
  printf ("%f\n", si);



}
