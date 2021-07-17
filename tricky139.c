#include <stdio.h>
int main()
{
    int a=8,b=24,v=10,c;
    while(v>5)
    {
        a=a+v+2;
        c=(a+b)-10;
        while(c>30)
        {
            b=b+c+2;
            c=c-4;
        }
        v=v/4;
    }
    printf("%d %d",b,c);
    return 0;
}
//o/p
//60 30
