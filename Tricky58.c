//58.Find the output of the following program
#include<stdio.h>
int main()
{
int a=15,b;
b=(a++)+(a++);
a=(b++)+(b++);
printf("a=%d b=%d",a,b);
return 0;
}
//O/P
//a=63 b=33