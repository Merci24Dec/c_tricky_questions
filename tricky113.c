#include <stdio.h>
int reverse()
{
    static int n=1;
    if(n>5)
       exit(0);
    printf("%d",n++);
    return reverse();
}
int main()
{
    reverse();
    return 0;
}
//o/p
//12345
