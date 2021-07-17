#include <stdio.h>
int main()
{
    int b=3,c=4,d=5;
    for(int a=1;a<=4;a++)
    {
        c=a+b;
        if((b+c)%10 != 0)
             c=c+a;
        else 
             d=d+a;
    }
    printf("%d %d",c,d);
    return 0;
}
//o/p
//7 9
