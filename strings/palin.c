#include<stdio.h>
#include<string.h>
void main()
 {
 	char a[10];
 	long unsigned int l;
 	gets(a);
 	l=strlen(a);
 	char b[l];
 	int c=0,i;
 	for(i=l-1;i>=0;i--)
 	{
 		b[c]=a[i];
 		c++;
 	}
 	b[c]='\0';
 	if((strcmp(a,b))==0)
 		printf("palindrome");
 	else
 		printf("not palindrome");
 }
