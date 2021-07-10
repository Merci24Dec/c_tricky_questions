#include <stdio.h>
void main()
{
    int a=2,cout=0,b=1;
    while(b<121)
    {
        b=a*b;
        cout=cout+1;
        b=b+1;
    }
    printf("%d",cout);
}
//o/p
//6
