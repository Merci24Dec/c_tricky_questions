#include <stdio.h>
void main()
{
    int c,n=6;
    c=n;
    a: printf("%d",c);
    c=c-2;
    if(c>0)
    {
        goto a;
    }
    
}
//o/p
//642
