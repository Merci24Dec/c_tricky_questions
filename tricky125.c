#include<stdio.h>
void main(){
    int i,j,k,sum=0;
    for(i=0;i<5;i++){
        printf("step i= %d\n",i);
        for(j=0;j<3;j++){
            printf(" j= %d\n",j);
            sum=i+j;
            for(k=0;k<2;k++){
                sum=sum+k;
                printf("  sum=%d\n ",sum);
            }
        }
    }
    printf("%d ",sum);
}
//o/p
/*step i= 0

 j= 0

  sum=0

   sum=1

  j= 1

  sum=1

   sum=2

  j= 2

  sum=2

   sum=3

 step i= 1

 j= 0

  sum=1

   sum=2

  j= 1

  sum=2

   sum=3

  j= 2

  sum=3

   sum=4

 step i= 2

 j= 0

  sum=2

   sum=3

  j= 1

  sum=3

   sum=4

  j= 2

  sum=4

   sum=5

 step i= 3

 j= 0

  sum=3

   sum=4

  j= 1

  sum=4

   sum=5

  j= 2

  sum=5

   sum=6

 step i= 4

 j= 0

  sum=4

   sum=5

  j= 1

  sum=5

   sum=6

  j= 2

  sum=6

   sum=7

 7 */

