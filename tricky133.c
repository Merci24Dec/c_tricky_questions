#include <stdio.h>
int main()
{
    int a=8,b=10,c=6;
    if(a>c && (b+c)>a)
        printf("%d\n",a);
    if(c>b || (a+c)>b)
       printf("%d\n",b);
    if((b+c)%a==0)
        printf("%d",c);
    return 0;
}
//o/p
//8
//10
//6
