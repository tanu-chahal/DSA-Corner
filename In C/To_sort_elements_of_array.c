// To sort elements of an array in descending order
#include <stdio.h>
void main ()
{
   int num[20];
   int i, j, a, n;
   printf("Enter number of elements in an array :");
   scanf("%d", &n);
   printf("Enter the elements :\n"); //For entering array elements
   for (i = 0; i < n; ++i)
      {
          scanf("%d", &num[i]);
      }

   printf("The elements will be :\n"); //for printing array elements
   for (i = 0; i < n; ++i)
      {
          printf("%d\t", num[i]);
      }

      // for sorting elements in descending order
   for (i = 0; i < n; ++i)
    {
      for (j = i + 1; j < n; ++j)
      {
         if (num[i] < num[j])
         {
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("\nThe numbers in descending order is:\n");
   for (i = 0; i < n; ++i){
      printf("%d\t", num[i]);
   }
}
