#include<stdio.h>
void main()
{
 char a[20],b[10];
 int l2,c=0;
 gets(a);
 int l=strlen(a);
 scanf("%d",&l2);
 int i=l-l2;
 for(i=l-l2;a[i]!='\0';i++)
  {
	b[c]=a[i];
	c++;
  }
  b[c]='\0';
  puts(b);
 }  

