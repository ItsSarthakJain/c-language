#include<stdio.h>
void main()
{
 char a[20],b[10];
 int l2,i=0;
 gets(a);
 scanf("%d",&l2);
 while(i<l2)
  {
	b[i]=a[i];
	i++;
  }s
  b[i]='\0';
  puts(b);
 }  

