//81.Predict the output:
#include<stdio.h>
int main()
{
int x=1,y=0,z=5;
int a = x && y || z++;
printf("%d",z);
return 0;
}
//O/P
//6