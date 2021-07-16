#include<stdio.h>
int fun(int x)
{
    if(x>9)
    {
        fun(27/9);
        printf("%d ",x-1);
        fun(27/3);
    }
    else
    {
        printf("%d ",x-2);
    }
}
int main()
{
   int x=27;
   fun(x);
   return 0;
}
//o/p
//1 26 7 

