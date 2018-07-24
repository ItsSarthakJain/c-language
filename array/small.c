#include<stdio.h>
void main()
{
int a[10],size;
printf("enter size");
scanf("%d",&size);

for (int i=0;i<size;i++)
scanf("%d",&a[i]);
int small=a[0];
for (int i=0;i<size;i++)
if(a[i]<small)
small=a[i];
printf("smallest is %d ",small);
}
