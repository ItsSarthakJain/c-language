#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[100],i,j,n,check,flag=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
      check=a[i];
      flag=0;
      if(i!=0)
      {
      for(j=i-1;j>=0;j--)
        if(a[j]==check)
           flag=1;
      }
      if(flag!=1)
        printf("%d\n",a[i]);
  }
    return 0;
}
