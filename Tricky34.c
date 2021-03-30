//34.Find the output of the following program
#include<stdio.h>
int main()
{
int x=10;
int y;
{
y=x++;
}
printf("%d\n%d",y,x);
return 0;
}

//O/P
// 10
// 11