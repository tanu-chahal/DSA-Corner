//Making a clone of Strcpy function
#include<stdio.h>
 int main()
 {
     char st2[6], st1[6]="Orange";
     int i = 0;
     printf("The first string is %s\n", st1);
     for(i=0;i<6;i++)
     {
        st2[i] = st1[i];

     }
     st2[6]='\0';
     printf("The second string is %s", st2);
     return 0;
 }
