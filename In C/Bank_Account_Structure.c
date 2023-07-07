//Make a program to give details of a bank account using structures
#include<stdio.h>
#include<string.h>

struct bank_account{
int account;
char name[50];
float balance;
char address[100];
} ;

int main(){
 int n;
 struct bank_account b[5];

  printf ("Enter the no.of the candidates: ");
  scanf("%d\n",&n);
fflush(stdin);
 printf ("Enter the details of each candidate: \n");
 for(int i=0;i<n;i++){
    printf("Candidate %d\n",i+1);
    printf("Enter Account Number: ");
    scanf("%d\n",&b[i].account);
    fflush(stdin);
    printf("Enter Full Name: ");
    gets(b[i].name);

    printf("\nEnter Bank Balance(in Rs.): ");
    scanf("%f\n",&b[i].balance);
    fflush(stdin);
    printf("Enter Address: ");
    gets(b[i].address);

    printf("\n");
 }

 printf("\nThe entered data is:\n");
 for(int j=0;j<n;j++){
    printf("Candidate %d\n",j+1);
    printf("Account Number: %d\n",b[j].account);

    printf("Full Name: %s\n",b[j].name);

    printf("Bank Balance(in Rs.) %f\n",b[j].balance);

    printf("Enter Address: %s\n",b[j].address);

    printf("\n");
 }


return 0;
}
