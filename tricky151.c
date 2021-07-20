#include<stdio.h>
int lower_matrix(int r, int c, int matrix[r][c]);
int main()
{
  int r, c, i, j;
  scanf("%d%d", &r, &c);
  int matrix[r][c];
  for(i = 0; i < r; i++)
  {
    for(j = 0; j < c; j++)
    {
        scanf("%d", &matrix[i][j]);
    }
  }
  lower_matrix(r, c, matrix);
  return 0;
}
int lower_matrix(int r, int c, int matrix[r][c])
{
  int i, j, k;
  for(k = 0; k < r; k++)
  {
   for(i=k,j=0;i<c;i++,j++)
   {
     printf("%d ", matrix[i][j]);
   }
  }
}
