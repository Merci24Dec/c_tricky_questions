#include <stdio.h>
int main()
{
    int m,k;
    int a[]= {3,6,8,1,4,9};
    m=a[0];
    for(int k=0;k<=5;k++)
    {
        if(m>a[k])
            m=a[k];
    }
    printf("%d",m);
    return 0;
}
//o/p
//1
