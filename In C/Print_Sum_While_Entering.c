//Keep taking numbers as inputs till the user enters ‘x’, after that print sum of all.

#include<stdio.h>

int main()
{
    int n, sum=0, m;
    m = 'x';
    printf("%d\n", m);
    printf("Enter your numbers ('x' to stop): ");
    scanf("%d",&n);
    if(n=='x')
             return 0;
    while(1){
        sum+=n;
        fflush(stdin);
        scanf("%d", &n);
        if(n=='x')
             break;
    }
    printf("\nSum: %d", sum);
    return 0;
}
