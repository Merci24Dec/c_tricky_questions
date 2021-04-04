//57.Find the output of the following program
#include<stdio.h>
int main()
{
int a=5,b=6,c=9,d;
d=(a>b)?(a>c?1:2):(c>b?6:8);
printf("%d",d);
return 0;
}
//O/P
//6  