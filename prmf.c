///func. to display square
#include<stdio.h>
int prime(int num)
{
int r,a=2,i,flag=0;
for(i=2;i<=num;i++)
{
a=2;
flag=0;
while(a<i)
{
if(i%a==0)
flag=1;
a++;
} 
if(flag==0)
printf("%d\n",i);
}
return 0;
}

int main()
{
int n;
scanf("%d",&n);
prime(n);
return 0;
}


