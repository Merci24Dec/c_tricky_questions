#include<stdio.h>
int main()
{
    int a=2,b=1,count=0;
    while(b<121)
    {
        b=a*b;
        b=b+1;
        count=count+1;
    }
    printf("%d",count);
    
}
//o/p
//6
