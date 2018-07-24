
#include<stdio.h>
int sqr(int num)
{
int r,m,sum=0;
m=num;
while(m!=0)
{
r=m%10;
sum=sum+(r*r*r);
m=m/10;
}
if(sum==num)
return 1;
else 
return 0;
}

int main()
{
int n=1,a;
while(n!=154)
{
a=sqr(n);
if(a==1)
printf("armstrong");
else
printf("not armstrong");
}
}

