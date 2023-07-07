//To know Greatest of four numbers
#include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf ("Enter four numbers\n");
    scanf ("%d %d %d %d\n",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
        {printf("%d is greatest\n",a);}

    if(b>a&&b>c&&b>d)
        {printf("%d is greatest\n",b);}

    if(c>b&&c>a&&c>d)
        {printf("%d is greatest\n",c);}

    if(d>b&&d>c&&d>a)
        {printf("%d is greatest\n",d);}

        return 0 ;


}
