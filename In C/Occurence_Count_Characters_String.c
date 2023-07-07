// Checking the occurence of any character in string and counting it,
#include<stdio.h>
#include<string.h>
int occurence(char *st, char c, int n)
{ int count=0;int i;

for (i=0;i<=n;i++)
{ if(st[i]==c)
 {
   count++;
 }

}
  return count;
}
int main()
{
    char st[100]; char c;
   int n;
   printf("Enter the string: ");
    gets(st);
    n = strlen(st);
     printf("\nEnter the character to be checked: ");
     scanf("%c\n",&c);
  int Count = occurence(st,c,n);
  if(Count==0)
  {
      printf("No, the character %c is not present in the string.\n",c);
  }
  else
  {
      printf("Yes, the character %c is present and its %d times in the string.\n",c,Count);
      }
  return 0;
}
