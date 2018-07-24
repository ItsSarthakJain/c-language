#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char a[10],b[10];
int i=0;
scanf("%[^\n]s ",a);
while(a[i]!='\0')
{
i++;
}
printf("%d",i);
int c=0,j;
for(j=i-1;j>=0;j--)
{
b[c]=a[j];
c++;
}
b[c]='\0';
printf(" %s",b);
}

