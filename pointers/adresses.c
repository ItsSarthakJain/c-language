#include<stdio.h>
void main()
{
int a[10],*ptr,*ptr2;
ptr=&a[3];
ptr2=&a[2];
printf("%p\n",&ptr);
printf("%p\n",&ptr2);
}
