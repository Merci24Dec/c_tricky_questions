//72.Find the output of the following program
#include<stdio.h>
struct marks
{
int p;
int c;
int m;
};
int main()
{
struct marks s;
printf("%d,%d,%d",s.p,s.c,s.m);
return 0;
}
//O/P
//0,0,0