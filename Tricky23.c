//23.Find the output of the following program
#include<stdio.h>
int main()
{
int x,y;
for(x=5;x>=1;x--)
{
for(y=1;y<=x;y++)
{
printf("%d ",y);
}
printf("\n");
}
return 0;
}

//O/P
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1