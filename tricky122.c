#include<stdio.h>
int main()
{
    int a=91,b=7,c,d;
    c=a/b;
    d=c%10;
    c=d+c;
    d=d-c;
    c=c+d;
    printf("%d , %d",c,d);
    return 0;
}
//o/p
//3 , -13
