#include <stdio.h>
void main()
{
    int n,b,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=i%9;
        if(b==0)
        {
            printf("%d",i);
        }
    }
}
//o/p
//numbers from 1 to n which are divisible by 9
//9 18 27 36
