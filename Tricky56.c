//56.Find the output of the following program
#include<stdio.h>
int main()
{
int a=10,b=2,c;
a=!(c=c==c)&& ++b;
c+=(a+b--);
printf("%d,%d,%d",b,c,a);
return 0;
}
//O/P
// 1,3,0 