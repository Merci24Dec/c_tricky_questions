#include <stdio.h>
int fun(int a,int b)
{
    int n=5;
    if(b<1)
       return n;
    else
       return fun(a+b+2,b-2);
}
int main()
{
    int a=3,b=4;
    printf("%d",fun(a,b));
    return 0;
}
//o/p
//5
