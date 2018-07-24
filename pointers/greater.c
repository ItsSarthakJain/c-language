#include<stdio.h>
int check(int *p1,int *p2,int *p3)
{
if(*p1>*p2&&*p1>*p3)
return 1;

if(*p2>*p1&&*p2>*p3)
return 2;

if(*p3>*p2&&*p3>*p1)
return 3;


}
void main()
{
int a,b,c,*ptr1,*ptr2,*ptr3,r;
ptr1=&a;
ptr2=&b;
ptr3=&c;
scanf("%d%d%d",ptr1,ptr2,ptr3);
r=check(ptr1,ptr2,ptr3);
if(r==1)
printf("%d",*ptr1);
else if(r==2)
printf("%d",*ptr2);
else if(r==3)
printf("%d",*ptr3);

}
