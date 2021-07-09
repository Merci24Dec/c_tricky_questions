#include<stdio.h>
void main()
{
    int a=0,b=1,c,d,n=456;
    while(n>0)
    {
        d=n%10;
        a=a+d;
        b=b*d;
        n=n/10;
    }
    printf("%d %d",a,b);
}
//o/p
//15 120
