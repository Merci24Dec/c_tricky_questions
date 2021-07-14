#include<stdio.h>
int main()
{
    int c=15,d=12;
    d=c-1;
    line:printf("%d ",c);
    c=d+(c-2);
    if(c<40)
        goto line;
        
    return 0;
}
//o/p
//15 27 39 

