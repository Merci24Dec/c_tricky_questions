//73.Find the output of the following program
#include<stdio.h>
struct marks
{
int p = 9, c = 10, m = 20;
};
int main()
{
struct marks s;
printf("%d, %d, %d ",s.p, s.c, s.m);
return 0;
}
//O/P
//Compilation error