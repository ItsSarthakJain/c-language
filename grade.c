#include<stdio.h>
void main()
 { 
   int a,b,c;
   float per=0;
   char grade;
   printf("enter the marks for 3 subjects\n");
   scanf("%d\n%d\n%d",&a,&b,&c);
   per=(a+b+c)/3;
   if(per>=90||per==100)
      grade='A';
   else if(per>=80||per==89)
      grade='B';
   else if(per>=60||per==79)
      grade='C';
   else if(per>=50||per==69)
      grade='D';
   else if(per<50)
      grade='E';
   switch(grade)
     { 
         case 'A':
           printf("EXCELLENT");
           break;
         case 'B':
           printf("VERY GOOD");
           break;
         case 'C':
           printf("GOOD");
           break;
         case 'D':
           printf("AVERAGE");
           break;
         case 'E':
           printf("WORK HARD");
           break;
     }
 }
