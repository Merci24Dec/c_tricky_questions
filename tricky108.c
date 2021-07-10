#include <stdio.h>
void main()
{
    int m,j,a[]={2,3,5,7,1};
    m=a[0];
    for(j=0;j<=4;j++)
    {
        if(m<a[j])
        {
            m=a[j];
        }
    }
    printf("%d",m);
}
//o/p
//7
