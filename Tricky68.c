//68.Find the output of the following program
#include<stdio.h>
int call(int a);
int main()
{
static int main;
int x;
x=call(main);
printf("%d",x);
return 0;
}
int call(int a)
{
a++;
return a;
}
//O/P
// 1