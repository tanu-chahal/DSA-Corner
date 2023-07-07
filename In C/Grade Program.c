//Program to calculate grade
#include <stdio.h>
void main()
{
    int marks;
    printf ("Enter your marks\n");
    scanf ("%d\n", &marks);


                if (marks >= 90 && marks<= 100)
                {
                    printf ("Congrats! Your Grade is A \n");
                }

            else if (marks<90 && marks>=80)
                {
                    printf ("Your Grade is B\n");
                }

               else if (marks<80 && marks>=70)
                {
                    printf("Your Grade is C\n");
                }


               else if (marks<70 && marks>=60)
                {
                   printf("Your Grade is D\n");
                }

         else if (marks<60&& marks>=50)
                      {
                   printf("Your Grade is E\n");
                }

               else if (marks<50)
                      {
                   printf("Work Harder ! Your Grade is F\n");
                }

              else
                printf ("You entered an invalid number, Please ensure number is =<100\n");



}
