#include <stdio.h>
int main()
{
    int i,j,k,c=0;
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=2;j++)
        {
            for(int k=0;k<=j-1;k++)
            {
                printf("A");
                c++;
            }
        }
    }
    printf("\nCount: %d",c);
    return 0;
}
//o/p
//AAAAAAAAAAAAAAA
//Count: 15
