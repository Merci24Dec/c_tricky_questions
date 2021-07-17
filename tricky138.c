#include <stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    j=1;
    k=1;
    for(i=1; i<=n; i++)
    {
        printf("%d  ",k);
        j=j+1;
        k=k+j;
    }
    return 0;
}
//o/p
//5
//1  3  6  10  15  

