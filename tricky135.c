#include <stdio.h>
int fun(int n)
{
    if(n==4)
      return 4;
    else 
       return 2*fun(n+1);
}

int main()
{
    printf("%d",fun(2));
    return 0;
}
//o/p
//16
