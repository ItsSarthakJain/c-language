#include<stdio.h>
#include<string.h>
void main()
 {
 	int i=0,count=0,flag=0;
 	char a[20],ch;
 	gets(a);
 	int l=strlen(a),m=0;
 	while(m<l)
 	{
 		ch=a[m];
 		count=0;
 		i=0;
 		flag=0;
 		for(int s=0;s<m;s++)
 				{
 					if(a[s]==ch)
 					  flag=1;
 				}
 		if(flag==0)
 		{
 		for(i=0;i<l;i++)
 		 { 
 			if(ch==a[i])
 			  ++count;
 			if((i==(l-1))&&(count>1))  
 				printf("%c occurs %d times\n",ch,count);
 		 }
 		}
 		 else if(flag==1)  //or else if(flag==1); c bhi kaam ho jayega
 		   flag=0;
 		m++;
 	 }
 	    
 }	  
