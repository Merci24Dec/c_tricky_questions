#include<stdio.h>
#include<math.h>
void main()
{
    int a=7,b=12,v=70,c;
    while(v>5)
    {
        a=a-v;
        c=(a+b) % 10;
        while(c>7)
        {
            b+=c;
        }
        v=v/2;
    }
    printf("%d %d",b,c);
}
// o/p
// 12 -1
