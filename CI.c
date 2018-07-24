#include<stdio.h>
#include<math.h>
int cmpd(int p,int r,int yr)
{
int ci=0,amt=0,si=0;
si=(p*r*yr)/100;
amt=si+p;
ci=amt*(pow((1+r),yr));
return ci;
}
int main()
{
int pr,rt,t,compound=0;
scanf("%d\n%d\n%d",&pr,&rt,&t);
compound=cmpd(pr,rt,t);
printf("compound intrest =%d",compound);
return 0;
}
