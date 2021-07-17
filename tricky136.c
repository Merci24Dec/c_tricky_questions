#include <stdio.h>
int main()
{
    int a=12,b=2,c=3,d=0,e=1;
    while(c>0)
    {
        d= a%b;
        e= e-d+a;
        c=c-1;
    }
    printf("%d",e);
    return 0;
}
//o/p
//37
