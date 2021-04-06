//71.Find the output of the following program
#include<stdio.h>
struct marks
{
int p;
int c;
int m;
};
int main()
{
struct marks s={2,-6,5};
printf("%d, %d, %d ",s.p,s.c,s.m);
return 0;
}
//O/P
//2, -6, 5