#include <stdio.h>
int main()
{
    int a,b,c,d;
    b=343;
    for(a=1;a<=4;a++)
    {
        c= b%10;
        d=b/10;
        a=a+c+d;
    }
    printf("%d",a);
    return 0;
}
//o/p
//39
