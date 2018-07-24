///func. to display square
#include<stdio.h>
int per(int num)
{
int a=1,sum=0;
while(a<num)
{
if(i%a==0)
sum=sum+a;
a++;
} 
if(sum==num)
return 1;
else
return 0;
}

int main()
{
int n,a;
scanf("%d",&n);
a=per(n);
if(a==1)
printf("perfect no");
else
printf("not perfect");
return 0;
}


