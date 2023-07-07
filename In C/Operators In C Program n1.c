//PROGRAM FOR OPERATORS
#include<stdio.h>
int main()
{
    int a,b,t,c;

    printf(" \n Enter values of Integers a and b : ");
    scanf(" %d %d\n",&a, &b);


    //Arithemetic Operators - Addition and Modulus Operator
    t = a + b;
    c = a%b;
    printf("Value of t is : %d\n ",t);
    printf("Value of c is : %d\n ", c);

  // Unary Or Increment and Decrement Operator
    a= ++t;
    printf("Increment of a : %d\n", a);
    b = --a;
    printf("Decrement of b : %d\n ", b);

    //Special Operator - sizeof()
    printf("Size of t and c will be : %d,  %d\n ", sizeof(t), sizeof(c) );

   //Bitwise Operator - Shift Operator
    b =  b>>2 ;
    printf("Right shift in b : %d\n ", b);
    t = t<<2 ;
    printf("Left Shift in t : %d\n ",t);

   //Assignment Operators
     a*=t;
    printf("Multiply a and t in a %d\n", a);
     b-=c;
    printf("Subtract c from b in b %d\n", b);

    return 0;



}
