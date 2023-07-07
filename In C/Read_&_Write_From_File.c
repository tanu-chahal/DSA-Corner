//To read data from file & twice the integer written in it.
#include<stdio.h>
int main(){ int num;
FILE *ptr;
if(ptr==NULL)
{
    printf("Error! File not found.");
}
else
{
    fopen("Output.txt","r");
    printf("Successfully Done!\n ");
}
fscanf(ptr,"%d",&num);
fclose(ptr);
printf("Successfully Done!\n ");

if(ptr==NULL)
{
    printf("Error! File not found.");
}
else
{
    fopen("Output.txt","w");
    printf("Successfully Done!\n ");
}
int s=num*2;
fprintf(ptr,"%d",s);
fclose(ptr);
printf("Successfully Done!\n ");

return 0;

}
