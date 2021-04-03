//48.Find the output of the following program
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
static int p=0;
p++;
printf("%d,%d\n",a,p);
}
//O/P
//60,1
//80,2
//40,3
//70,4
//20,5
  