//Volume Of Cylinder

#include<stdio.h>

#define pi 3.145
void main()
{
  float r,h,V;

  printf("Enter the value of Radius, Height = \n ");
  scanf("%f,%f", &r,&h);

  V = pi*r*r*h ; //Formula For Calculating Volume Of Cylinder

  printf("Volume of Cylinder will be %f ", V);
}
