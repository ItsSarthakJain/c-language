#include<stdio.h>
void main()
{
int num1,num2,n1,n2,n,bit1,bit2;
scanf("%d\n%d\n%d",&n1,&n2,&n);


if(((n1&(1<<n)==0)&&((n2&(1<<n)==1))
 {
   num1&=~(1<<n);
   num2|=(1<<n);
  }
else if(((n1&(1<<n)==1)&&((n2&(1<<n)==0))
 {
  num2&=~(1<<n);
   num1|=(1<<n);
  }

printf("%d\n%d",bit1,bit2);
}
