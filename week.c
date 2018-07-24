#include<stdio.h>
void main()
 {
   int day;
   printf("enter the no of the day");
   scanf("%d",&day);
   switch(day)
     { 
         case 1:
           printf("Monday");
           break;
         case 2:
           printf("Tuesday");
           break;
         case 3:
           printf("Wednusday");
           break;
         case 4:
           printf("Thursday");
           break;
         case 5:
           printf("Friday");
           break;
         case 6:
           printf("Saturday");
           break;
         case 7:
           printf("Sunday");
           break;
         default:
           printf("Enter between 1 to 7");
     }
}
