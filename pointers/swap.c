#include<stdio.h>
void swap(int *a,int *b)
{
*a=*a*(*b);
*b=*a/(*b);
*a=*a/(*b);
}
void main()
{
int a,b;
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("%d\n%d",a,b);
}
