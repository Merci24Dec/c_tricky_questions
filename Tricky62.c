//62.Find the output of the following program
#include<stdio.h>
int main()
{
int y[4]={6,7,8,9};
int *ptr;
ptr=y+2;
printf("%d\n",*(ptr+1));
return 0;
}
//O/P
//9  