//21.Find the output of the following program
//Assume int is 2 bytes,char is 1,byte and float is 4 bytes
#include<stdio.h>
int main()
{
union test{
int x;
char y;
float z;
}var;
printf("%ld",sizeof(var));
return 0;
}

//O/P
// 4