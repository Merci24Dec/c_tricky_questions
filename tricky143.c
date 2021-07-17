#include <stdio.h>
int func(int a,int b)
{
    int t;
    while(b)
    {
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}
int main()
{
    int a=10,b=6;
    printf("%d",func(a,b));
    return 0;
}
//o/p
//2
