#include<stdio.h>
int fun(int n)
{
    if (n == 4)
    {
        return n;
    }
    else
    {
        return 2*fun(n+1);
    }
}
void main()
{
    printf("%d",fun(2));
}
//o/p
//16
