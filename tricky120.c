#include<stdio.h>
int main()
{
    int p,s,t,q=81,r=10;
     while(q>r)
     {
       p=q+r;
       s=p/10;
       t=s*s;
       q=q/3;
     }
     if(t>s)
     printf("%d",s);
     else 
     printf("%d",t);
    return 0;
}
//o/p
//3
