//To read data from one file and paste it in another file twice
#include<stdio.h>

int main()
{
    char c;
    FILE *ptr1;
    FILE *ptr2;

    if(ptr1==NULL){
        printf("Error! File not found.");
        }
    else
     {
         ptr1 = fopen("a.txt","r");
     }
    if(ptr2==NULL)
         {
             printf("Error! File not found.");
         }
    else
     {
         ptr2 = fopen("b.txt","w");
     }


    c= fgetc(ptr1);
   /* while(c!=EOF){
      fputc(c,ptr2);
      c= fgetc(ptr1);
    } */

    while(c!=EOF){
      fputc(c,ptr2);
      c= fgetc(ptr1);
    }

   printf("Successfully Done!");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
