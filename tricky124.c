#include<stdio.h>
int function(int x,int y)
{
  if(x>1)
     function(x-2,y+2);
  printf("%d ",y);
}
int main()
{
    function(4,5);    
    return 0;
}
//o/p
//9 7 5 

