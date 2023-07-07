// A program to store input data in a file
#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct employee{
char name[25];
float salary;
}emp;

int main()
{ FILE *ptr;
emp e[1000]; int n; char str[25];
   if(ptr==NULL)
   {
       printf("Error! File not found!");
   }
   else
   {
       ptr=fopen("Data.txt","a");
   }
    printf("Enter the number of employees(whose data you want to enter):");
    scanf("%d\n",&n);
    fflush(stdin);
    printf("Enter employee's details:\n");
    for(int i=0;i<n;i++)
    {
        printf("Name of the employee %d: ",i+1);
        gets(str);
        strcpy(e[i].name, str);
        printf("\nEnter salary(in Rs.):");
        scanf("%f\n",&e[i].salary);
        printf("\n");
        fflush(stdin);
    }

      for(int i=0;i<n;i++){
    fprintf(ptr,"Name of the employee %d is: %s\n Salary(in Rs.) is: %f\n ",i+1, e[i].name,e[i].salary);
    }

    fclose(ptr);
    return 0;
}
