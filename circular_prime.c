#include<stdio.h>
#include<math.h>
  void main()
		{
		int no,a[10],s,m,n,i,r,count=0;
		int j=2,flag=0;
		scanf("%d",&no);
		m=no;
		n=no;
		while(m!=0)
		 {	
		 		m=m/10;
		 		count++;
		 }
		 s=count-1;
		for(i=0;i<count;i++)
			{
				r=n%10;
				n=n/10;
				n=(r*(pow(10,s)))+n;
				a[i]=n;
				
				
			}
			for(i=0;i<count;i++)
			{
			while(j<a[i])
			{
			if(a[i]%j==0)
			  flag=1;
			  j++;
			  break;
			}
			}
			if(flag==1)
			printf("%d not circular prime",no);
			else
			printf("%d circular prime",no);
		}
