//39.Find the output of the following program
#include<stdio.h>
int main()
{
int a=1;
printf("size of a is %ld bytes",sizeof(++a));
printf("\nvalue of a is %d",a);
return 0;
}

//O/P
// size of a is 4 bytes
// value of a is 1