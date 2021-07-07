#include <stdio.h>
void main()
{
    int i=0,j=1,k=2,m;
    if(m=i++||j++||k++)
    printf("%d",i);//1
    printf("%d",j);//2
    printf("%d",k);//2
    printf("%d",m);//1 true
    
}
