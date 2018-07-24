#include<stdio.h>
void main()
 {
   int rows,i,j,k,m=3,n=1;
   scanf("%d",&rows);
   m=rows;
     for(i=-1;i<=rows-2;i++)
     {  for(k=m;k>1;k--)
          {
           printf(" ");
           }
        for(j=1;j<=n;j++)
           printf("*");
        printf("\n");
        m--;
        n+=2;
     }
  }
