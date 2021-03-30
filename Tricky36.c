//36.Find the output of the following program
#include<stdio.h>
int main()
{
char ch='a';
switch(ch)
{
case 97:printf("97");
break;
case 'a':printf("98");
break;
case 99:printf("99");
break;
default:printf("default"); 
}// end of switch()
return 0;
}

//O/P
// Tricky36.c: In function 'main':
// Tricky36.c:10:1: error: duplicate case value
// case 'a':printf("98");
// ^
// Tricky36.c:8:1: error: previously used here
// case 97:printf("97");
// ^