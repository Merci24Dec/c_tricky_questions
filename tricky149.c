// Factors of a number 

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("Factors of %d are: \n",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
           printf("%d ",i);
    }
    return 0;
}
//o/p
/*5

Factors of 5 are: 

1 5*/
