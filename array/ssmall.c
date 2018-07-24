#include<stdio.h>
void main()
{
  int a[10],i,size,small,ssmall,index=-1;
  scanf("%d",&size);
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);
  small=a[0];
  for(i=0;i<size;i++)
		{
			if(small>=a[i])
			{
			   index=i;
			}

		}   
  ssmall=a[index+1];
  for(i=0;i<size;i++)
  {
  	if(i!=index)
	  	if(ssmall>=a[i])
	  	ssmall=a[i];
  }
  	printf("%d",ssmall);
  	   }
  	  
  
  
