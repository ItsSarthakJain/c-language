#include<stdio.h>
#include<string.h>
void main()
{
int i,count=0;
char a[20];
scanf("%[^\n]s",a);
i=0;
while(a[i]!='\0')
{
count++;
i++;
}
printf("length is %d",count);
}
