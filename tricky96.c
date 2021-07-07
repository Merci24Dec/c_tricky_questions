#include <stdio.h>
int fun(int c){
    printf("%d ",c);
    if(c<15){
        c=c+2;
        fun(fun(fun(c)));
    }
    return c;
}
void main()
{
    fun(12);
}
// o/p
// 12 14 16 16 16 16 16

