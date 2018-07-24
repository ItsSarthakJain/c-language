#include<stdio.h>
int cel2far(int cel)
{
int far;
far=cel*(9/5)+32;
return far;
}
void main()
{
int fr,cl;
scanf("%d",&cl);
fr=cel2far(cl);
printf("Farenhiet= %d",fr);
}


