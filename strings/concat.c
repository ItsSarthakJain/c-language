#include<stdio.h>
#include<string.h>
void main()
{
 int j=0,i=0,count=0;
 char a[20],b[20],ch;
 scanf("%[^\n]s",a);
 scanf(" %[^\n]s",b);
  while(a[i]!='\0')
  {
	 i++;
  }
  while(b[count]!='\0')
  {
	 count++;
  }
 int size=i+count;
 char c[size];
 i=0;
 while(a[i]!='\0')
 {
  c[i]=a[i];
  i++;
 }
 while(b[j]!=0)
 {
  c[i]=b[j];
  i++;
  j++;
 }
 c[size]='\0';
 printf("%s",c);
}
