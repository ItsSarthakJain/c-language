#include<stdio.h>
void main()
{
int i;
char a[10],b[10];
scanf("%[^\n]s",a);
while(a[i]!='\0')
{
b[i]=a[i];
i++;
}
b[i]='\0';
printf("%s",b);
}
