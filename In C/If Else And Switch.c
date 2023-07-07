//If Else And Switch Program
#include<stdio.h>
int main ()
{
    int month, yr, lp;
    printf("Enter the number of month and year :\n ");
    scanf("%d %d\n ", &month, &yr);


          lp = yr%4;
          printf("Leap Year %d\n", lp);
   switch(month)
    {
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12 :
        printf("The month has 31 days \n");
        break;

        case 2 :
       if(lp == 0)
            {
                printf("The month has 29 days\n");
            }
            else
            {
                printf("The month has 28 days\n");
            }
            break;
        case 4 :
        case 6 :
        case 9 :
        case 11:
            printf("The month has 30 days");
            break ;
        default : ("Enter the number between 1 and 12");

    }
    return 0 ;

}
