//Making a function to calculate area of rectangle
#include<stdio.h>

float areafunction(float l,float b); //function prototype
int main()
{
    float l,b,area;
    printf ("Enter the values of length and breadth :");
    scanf ("%f %f\n", &l ,&b);
    area = areafunction (l,b) ; //function call
    printf ("The area of rectangle will be %f\n",area);
    return 0;
}
// function definition
float areafunction (float l,float b)
{
    float a;
    a = l*b;
    return a;

}
