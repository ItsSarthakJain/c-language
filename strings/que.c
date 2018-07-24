int main() 
{

int i=0,count=0,flag=0;
 	char a[20],ch,b[20],j,l,temp;
 	gets(b);
    l=strlen(b);
   for(i=0;i<l-1;i++)
   {
   	  for(j=0;j<l-1;j++)
   	  	if(b[j]>b[j+1])
        {
   	  	temp=b[j];
        b[j]=b[j+1];
        b[j+1]=temp;  
        }
   }
   strcpy(a,b);
 	int m=0;
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
 			if(i==(l-1)&&ch!=' ')  
 				printf("%c %d\n",ch,count);
 		 }
 		}
 		 else if(flag==1)  //or else if(flag==1); c bhi kaam ho jayega
 		   flag=0;
 		m++;
 	 }
 	    