//Introduction to Macros
#include<stdio.h>

#define PI 3.14
#define AREACIRCLE(r) (PI*r*r)
#define VOLUMESPHERE(R) ((4/3)*PI*R*R*R)
#define VOLUMECYLINDER(rad,h) (PI*rad*rad*h)

int main()
{
    float r,R,rad,h;
    printf("Press '1' for Area of Circle\nPress '2' for Volume of Sphere\nPress '3' for Volume of Cylinder\n");
    int n;
    printf("Press the number:");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        {
            printf("\nEnter the radius of circle: ");
            scanf("%f", &r);
            float area= AREACIRCLE(r);
            printf("The Area of the Circle is: %f\n",area);
            break;
        }
    case 2:
        {
            printf("\nEnter the radius of sphere: ");
            scanf("%f", &R);
            float volume= VOLUMESPHERE(R);
            printf("The Volume of Sphere is: %f\n",volume);
           break;
        }
    case 3:
        {
           printf("\nEnter the radius & height of cylinder: ");
            scanf("%f %f", &rad,&h);
            float volume= VOLUMECYLINDER(rad,h);
            printf("The Volume of Cylinder is: %f\n",volume);
           break;
        }
    default :
    printf("\nPlease enter valid number.");
    }

    return 0;

}
