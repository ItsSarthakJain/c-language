#include<stdio.h>
int fib(int *n1)
{
int a,b,c;
int *ptr1,*ptr2,*ptr3,i;
ptr1=&a;
ptr2=&b;
ptr3=&c;
*ptr1=0;
*ptr2=1;
printf("%d\n",*ptr1);
printf("%d\n",*ptr2);
*ptr3=*ptr1+*ptr2;
printf("%d\n",*ptr3);
for(i=0;i<*n1;i++)
{
*ptr1=*ptr2;
*ptr2=*ptr3;
*ptr3=*ptr1+*ptr2;
printf("%d\n",*ptr3);
}
}
void main()
{
int no;
int *ptr;
ptr=&no;
scanf("%d",ptr);
fib(&no);
}
