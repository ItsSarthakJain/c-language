#include<stdio.h>
 int swap(int*p1 , int *p2)
  {
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
  }
 int sort(int a[],int n)
 {
   int i=0,j;
   for(i=0;i<n-1;i++)
   {
   	  for(j=0;j<n-i;j++)
   	  	if(a[j]>a[j+1])
   	  	  swap(&a[j],&a[j+1]);
   }
   printf("\n");
 }
 void main()
 {
  int a[10],i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d\n",&a[i]);
  sort(a,n); 
  for(i=0;i<n;i++)
   printf("%d\n",a[i]); 
 }
