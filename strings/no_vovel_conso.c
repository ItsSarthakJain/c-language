#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
char a[20],b[20],ch;
int i=0,vowel=0,conso=0,wild=0;
scanf("%[^\n]s",a);
i=0;
while(a[i]!='\0')
{
a[i]=tolower(a[i]);
if(a[i]>=97&&a[i]<=122)
{
if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u')
vowel++;
else if(a[i]!='a'||a[i]!='i'||a[i]!='e'||a[i]!='o'||a[i]!='u')
conso++;
}
else
wild++;
i++;
}
printf("%d\n%d\n%d",vowel,conso,wild);
}
