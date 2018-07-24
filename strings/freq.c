#include<stdio.h>
#include<string.h>
void main()
{
int i,count=0;
char a[20],ch;
scanf("%[^\n]s",a);
printf("enter char to be searched\n");
scanf(" %c",&ch);
i=0;
while(a[i]!='\0')
{
count++;
i++;
}
int freq=0;
for(i=0;i<=count;i++)
{
if(a[i]==ch)
freq++;
}
printf("the freq of %c is = %d",ch,freq);
}
