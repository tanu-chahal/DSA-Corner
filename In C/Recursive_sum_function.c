//To Calculate Sum of First n Natural Numbers by Recursive Function
#include <stdio.h>
int sum(int num);
int main()
{
    int n;
    printf ("Enter the number for calculating sum :");
    scanf ("%d\n", &n);
    printf ("The sum of %d natural numbers will be %d\n", n,sum(n));
    return 0 ;
}
int sum(int num)
{
    int result;
    if (num==0)
    {
        return 0;
    }
    else
    {
    result = num + sum(num-1);
    return result ;
    }
}
//num = 4
//result = 4 + sum(3)
//      = 4 +3+ sum(2)
//      = 4+3+2+sum(1)
//      = 4+3+2+1+sum(0)
//      = 10
