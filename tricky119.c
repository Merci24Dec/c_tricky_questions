#include <stdio.h>
int main()
{
   int p[10]= {12,16,24,2,18,20};
   int a,b,c,d,e;
   b=0; e=2;
   for(c=1;c<=11;c=c+2)
   {
       b=b+p[c+1];
   }
   printf("%d",b);
   d=(b+e)%2;
   printf("\n%d",d);
    return 0;
}
//o/p
//42
//0

