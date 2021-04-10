//94.Predict the output:
#include<stdio.h>
int main()
{
int a[3][2]={{1,2},{3,4},{5,6}};
printf("%d, %d",a[1][1],*(*(a+1)+1));
return 0;
}
//O/P
//4, 4