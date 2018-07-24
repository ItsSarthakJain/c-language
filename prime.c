///// to count the prime no untill -1 is entered
#include<stdio.h>
void main()
 {

   int s,n,flag=0,count=-1;
   do
	  {

		 scanf("%d",&n);
		 s=2;
		 flag=0;
		 while(s<n)
		 	{
		 		if(n%s==0)
		 			flag=1;
		 			s++;
		 	}
		 	if(flag==0)
		 	  count++;
		 }while(n!=-1);
		 printf("%d",count);
	}	  
		 
		 
