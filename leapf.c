#include<stdio.h>
int leapyr(int yr)
{
if(yr%4==0)
{
  if(yr%100!=0||yr%100==0)
  {
    if(yr%400==0)
    {
      return 1;
      }
     else 
     return 0; 
   }   
  return 1;
}
else return 0;        
}
void main()
{
int year,r=0;
scanf("%d",&year);
r=leapyr(year);
if(r==1)
printf("Leap year");
else
printf("not A leap Year");
}
