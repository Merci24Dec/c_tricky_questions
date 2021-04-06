//67.Find the output of the following program
#include<stdio.h>
int main()
{
int i=0;
if(i==0)
{
i=((5,(i=3)),i=1);
printf("%d",i);
}
return 0;
}
//O/P
//1