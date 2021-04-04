//55.Find the output of the following program
#include<stdio.h>
int main()
{
char x[]="hello hi";
printf("%ld, %ld",sizeof(*(x+0)),sizeof(x));
return 0;
}
//O/P
//1, 9