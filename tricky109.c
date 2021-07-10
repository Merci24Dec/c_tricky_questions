#include <stdio.h>
int fun(int n)
{
    if(n>100)
    {
        return n -10;
    }
    return fun(n+11);
}
void main()
{
    printf("%d",fun(99));
    
}
//o/p
//100
