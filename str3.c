#include<stdio.h>
void main()
 {
   int rows,i,j,k,m=3;
   scanf("%d",&rows);
   m=2*rows;
     for(i=1;i<=rows;i++)
     {  for(k=m;k>=1;k--)
          {
           printf(" ");
           }
        for(j=1;j<=i;j++)
           printf(" *");
        printf("\n");
        m-=2;
     }
  }
/*
               *
             * *
           * * *
         * * * *
       * * * * *
     * * * * * *
   * * * * * * *
*/
