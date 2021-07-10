#include <stdio.h>
void main()
{
    int a=2,b=3,cout=0,cout1=0;
    while(a<=5)
    {
        b=2;
        while(b<=4)
        {
            b=b+2;
            cout1++;
        }
        a++;
        cout++;
    }
    printf("%d %d",cout,cout1);
}
//o/p
//4 8
