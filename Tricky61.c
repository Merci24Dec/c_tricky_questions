//61.Find the output of the following program
#include<stdio.h>
void func();
int main()
{
func();
func();
return 0;
}
void func()
{
int x=0;
static int y=0;
x++;
y++;
printf("%d,%d\n",x,y);
}
//O/P
//1,1
//1,2 