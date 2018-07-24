#include<stdio.h>
void main()
{
  int a[10],i,k=0,b[10],size,cousin=0;
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
			     	b[k]=i;
			     	k++;
			   }

		} int s=0;
		while(s!=k)
		{
		if(b[s]+1==b[s+1])
		  if(a[b[s+1]]-a[b[s]]==4||a[b[s+1]]-a[b[s]]==-4)
		   cousin++;
		   

		s++;
		}  
printf("\n%d",cousin);
  	   }
  	  
  
