///func. to display square
#include<stdio.h>
int sqr(int num)
{
int fact=1;
while(num!=0)
{
fact=fact*num;
num--;
}
return fact;
}

int main()
{
int n,a;
scanf("%d",&n);
a=sqr(n);
printf("%d",a);
}


