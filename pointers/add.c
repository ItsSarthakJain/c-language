#include<stdio.h>
void main()
{
int *ptr1,*ptr2,a,b,c,*ptr3;
ptr1=&a;
ptr2=&b;
ptr3=&c;
scanf("%d",ptr1);
scanf("%d",ptr2);
*ptr3=((*ptr1)+(*ptr2));
printf("%d",*ptr3);
}


