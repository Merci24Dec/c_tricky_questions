#include <stdio.h>
void main()
{
    int i,j,k,A;
    int c=0;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=2;j++)
        {
            for(k=0;k<=j-1;k++)
            {
                c++;
                printf("A");
            }
        }
    }
    printf("\n%d",c);
}
//o/p
//AAAAAAAAAAAAAAA
//15

