#include<stdio.h>
int main()
{
    int arr[5]={5,6,51,54};
    int k,a=5,j,n=3;
    for(k=1;k<=a-2;k++)
    {
        arr[n]=arr[2];
        for(int j=1;j<=n-2;j++)
        {
            arr[j]=arr[j+2];
        }
    }
    for(k=1;k<=n-2;k++)
    {
        printf("%d",arr[k+1]);
    }
    return 0;
}
//o/p
//51
