#include<stdio.h>
int main()
{
    int a,b=2;
    for(a=1;a<=6;a++)
    {
        a=a+2;
        b=b+a-4;
    }
    printf("%d",b);
    return 0;
}
//o/p
//3
