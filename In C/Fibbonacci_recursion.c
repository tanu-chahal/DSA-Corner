// Fibbonacci series by Recursion
#include <stdio.h>
int series(int num);
int main()
{
    int n;
    printf ("Enter the number :");
    scanf ("%d\n", &n);
    printf ("The Fibbonacci Series nth element will be %d\n", series(n));
    return 0;
}
int series(int num)
{
    int result  ;
    if (num ==1)
       {
           return 0;
       }
    else if (num==2)
       {
           return 1 ;
       }
    else
       {
        result = series(num-1) +series (num-2);
       }

} //Fibbonacci Series 0,1,1,2,3,5,8,13,21.....
//3rd element
//result = series(2) + series(1)
//result = 0 +1 = 1

//7th element
//result = series(6) + series(5)
      //   =  series(5) +  series(4) +  series(4)+  series(3)
    // =  series(4) +  series(3) +  series(3)+  series(2) +  series(3) +  series(2) +  series(2)+  series(1)
    // = series(3)+series(2) + series(2) +series(1) +series(2) +series(1)+series(2) +series(1) +3 +0
    // = series(2) + series(1) +3 +4 +0+0+0
    // = 1 +0 + 7 = 8
