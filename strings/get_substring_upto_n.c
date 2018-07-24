#include<stdio.h>
void main()
{
 char a[20],b[10];
 int l2,c=0,pos,i;
 gets(a);
 int l=strlen(a);
 scanf("%d\n%d",&pos,&l2);
 i=pos;
 for(int j=0;j<l2;j++)
 {
 	b[c]=a[i];
 	i++;
 	c++;
 }
 b[c]='\0';
  puts(b);
 }  

