//Count of 1's in binary format
#include<stdio.h>
int main()
{
    int n,rem,count=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        if(rem==1)
            count++;

        n=n/2;
    }
    if(count>0)
        printf("%d",count);
    else
        printf("invalid");
    return 0;
}
//o/p
//5
//2
