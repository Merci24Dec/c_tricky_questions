// x pattern of a string 
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int len= strlen(s);
    for(int i=0;i<len;i++)
    {
      for(int j=0;j<len;j++)
      {
        if(i==j || (i+j)==(len-1))
          printf("%c",s[i]);
        else 
         printf(" ");
      }
      printf("\n");
    }//end of i loop
    return 0;
}
//o/p
/*
akash

a   a

 k k 

  a  

 s s 

h   h
*/
