#include<stdio.h>
void main(){
    int a=2,b=3,count=0,count1=0;
      while(a<=5)
      {
          b=2;
          while(b<=4)
          {
               b=b+2;
               count1=count1+1;
          }
          a=a+1;
          count=count+1;
      }
      printf("%d,%d",count,count1);
}
//o/p
//4,8
