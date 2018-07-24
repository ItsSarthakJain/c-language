#include<stdio.h>
#include<string.h>
void main()
 {
 	int i=0,count=0,flag=0;
 	char a[20],b[20],ch;
 	gets(a);
 	int l=strlen(a),m=0;
 	while(m<l)
 	{
 		ch=a[m];
 		count=0;
 		i=0;
 		for(i=0;i<l;i++)
 		 { 
 			if(ch==a[i])
 			  ++count;
 			if(i==(l-1)&&count>1)
 	 			{
 	 			  b[m]='z';
 				}
 			else if(i==(l-1))
 			   b[m]=ch;	
 		 }
 		m++;
 	 }
 	 b[m]='\0';
 	 puts(b);
 	    
 }	  
