#include<stdio.h>
void main()
{
int a[10],size;
printf("enter size");
scanf("%d",&size);

for (int i=0;i<size;i++)
scanf("%d",&a[i]);
int large=a[0];
for (int i=0;i<size;i++)
if(a[i]>large)
large=a[i];
printf("largest is %d ",large);
}
