#include<stdio.h>
void main()
{
long int a,b,*ptr1,*ptr2;
long int i,*ptr3;
ptr1=&a;
ptr2=&b;
ptr3=&i;
scanf("%ld\n%ld",ptr1,ptr2);
for(*ptr3=*ptr1;*ptr3<=*ptr2;i++)
{
if(*ptr3%2==0)
printf("Roll No %d is even\n",*ptr3);
}
}
