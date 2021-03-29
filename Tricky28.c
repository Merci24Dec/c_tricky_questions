//28.Find the output of the following program
#include<stdio.h>
int main()
{
static int i;
int j;
for(j=1;j<=2;j++)
{
i+=2;
i-=j;
}
printf("%d",i);
return 0;
}

//O/P
// 1