//Handshakes
#include<stdio.h>
int main()
{
 int t;
 int n;
 int hs[100];
 int c=0;
      scanf("%d",&t);
 for(int i = 1;i<=t;i++)
 {
  scanf("%d",&n);
            hs[c]= n*(n - 1)/2;
           c++;
 }
 //Output
 for(int i=0;i<c;i++)
     printf("%d\n",hs[i]);
 return 0;
}
//o/p
/*
5
6

7

8

9

10

15

21

28

36

45
*/



