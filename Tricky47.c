//47.Find the output of the following program
#include<stdio.h>
void display(int);
int main()
{
display(60);
display(80);
display(40);
display(70);
display(20);
return 0;
}
void display(int a)
{
int p=0;
p++;
printf("%d,%d\n",a,p);
}
//O/P
// 60,1
// 80,1
// 40,1
// 70,1
// 20,1