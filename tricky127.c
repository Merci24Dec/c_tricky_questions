#include <stdio.h>
int fun(int x)
{
  if(x>0)
  {
   fun(x-3);
   printf("%d  ",x);
   fun(x-2);
  }
}

int main()
{ 
  fun(4);
  return 0;
}
//o/p
//1  4  2  
