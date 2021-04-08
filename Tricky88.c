//88.Predict the output:
#include<stdio.h>
int main()
{
int y=1,x=0;
int l=(y++,x++)?y:x;
printf("%d",l);
return 0;
}
//O/P
//1