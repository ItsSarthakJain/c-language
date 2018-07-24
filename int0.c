#include<stdio.h>
void main()
{
int num,i,count=0,m;
scanf("%d",&num);
m=num;
while(m!=0)
	{
	  if(m%10==0)
	    count++;
	  m=m/10;
	}
	printf("%d\n",count);
for(i=1;i<=count;i++)
    printf("0 ");
}

