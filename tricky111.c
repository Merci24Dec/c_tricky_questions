#include <stdio.h>
int fun(char *a)
{
    if(*a == '\0')
    {
        return 0;
    }
    fun(a+1);
    fun(a+1);
    printf("%c",*a);
}
void main()
{
    fun("pqr");
}
//o/p
//rrqrrqp

