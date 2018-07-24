///func. to display square
#include<stdio.h>
int swap(int num1,int num2)
{
num2=num2*num1;
num1=num2/num1;
num2=num2/num1;
printf("%d\n%d",num1,num2);

return 0;
}

int main()
{
int n1,n2;
scanf("%d\n%d",&n1,&n2);
swap(n1,n2);
return 0;
}


