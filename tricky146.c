#include <stdio.h>
int main()
{
    int p,q,r;
    scanf("%d%d%d",&p,&q,&r);
    p=p+q+r-9;
    q=(p+q)/2;
    if(p>q)
       printf("Inside if");
    else 
      printf("Inside else");
    return 0;
}
//o/p
/*
5

6

7

Inside if
*/

