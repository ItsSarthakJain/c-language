#include<stdio.h>
void main()
{
char a[10],b[10];
int i=0,j=0;
scanf("%[^\n]s",a);
while(a[i]!='\0')
{
i++;
}
int c=0;
for(int c=0;c<=i;c++)
{
if((a[c]>=65&&a[c]<=91)||(a[c]>=97&&a[c]<=122))
{
b[j]=a[c];
j++;
}
}
b[j]='\0';
printf("%s",b);
}
