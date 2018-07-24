#include<stdio.h>
void main()
{
  int a[10],i,size,small,large,slarge;
  scanf("%d",&size);
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);
  large=a[0];
  small=a[0];
  for(i=0;i<size;i++)
		{
			if(large<a[i])
			   large=a[i];
			if(small>a[i])
			   small=a[i];
		}   
  for(i=0;i<size;i++)
  	if(large>a[i]&&small<a[i])
  	slarge=a[i];
  	printf("%d\n%d",large,slarge);
  	   }
  	  
  
  /*
or

#include<stdio.h>
void main()
{
  int a[10],i,size,large,slarge,index=-1;
  scanf("%d",&size);
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);
  slarge=a[0];
  large=a[0];
  for(i=0;i<size;i++)
		{
			if(large<a[i])
			   index=i;

		}   
  slarge=a[index+1]
  for(i=0;i<size;i++)
  	if(i!=index)
  	if(slarge<a[i])
  	slarge=a[i];
  	printf("%d\n%d",slarge);
  	   }
  	  
  
  */
