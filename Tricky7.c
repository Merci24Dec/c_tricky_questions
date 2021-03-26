//7.Find the output of the following program
#include<stdio.h>
int main()
{
int a[5]={5,1,15,20,25};
int i,j,m;
i= ++a[1];
j= a[1]++;
m= a[i++];
printf("%d,%d,%d",i,j,m);
return 0;
}

//O/P
//3,2,15 