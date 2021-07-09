#include<stdio.h>
void main()
{
    int n=5,f0=0,f1=3,f,i;
    for(i =0; i<n ; i++)
    {
        f=f0+1;
        printf("%d",f);
        f0=f1;
        f1=f;
    }
    
}

//o/p
//14253
