//Area and Circumference Of Circle And Area of Rectangle

#include<stdio.h>

int main()
{
    #define pi 3.14;

    float r,A,C,l,b,A1;// r=radius, A = area of circle, C = circumference,
    // l= length, b = breath, A1 = area of rectangle

    printf("Enter the value of Radius, Length, Breath \n");
    scanf("%f,%f,%f", &r,&l,&b);

    A = r*r*pi ; //Area of Circle

    C = r*2* pi ; //Circumference of Circle

    A1 = l*b ; //Area Of Rectangle

    printf("Area of circle %f", A);
    printf("Circumference of Circle %f ", C);
    printf("Area Of Rectangle %f", A1);
    return 0;

}
