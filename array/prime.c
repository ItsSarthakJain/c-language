#include<stdio.h>
void main()
{
  int a[10],i,b[10],size;
  int j=2,flag=0;
  scanf("%d",&size);
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);
  for(i=0;i<size;i++)
		{ 
		  flag=0;
		  j=2;
		          while((j!=a[i])&&(a[i]!=1))
			  {
			  if(a[i]%j==0)
			    flag=1;
			  j++;
		          }  
		  
			if(flag==0&&a[i]!=1)
			   {
			     	printf("\n%d\n",a[i]);
			   }

		}   

  	   }
  	  
  
