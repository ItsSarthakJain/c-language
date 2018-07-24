#include<stdio.h>
#include<math.h>
void main()
 {
   float root1,root2;
   int a,b,c,det=0
   printf("Enter the values of a,b,c \n");
   scanf("%d\n%d\n%d",&a,&b,&c);
   det=((b*b)-4*(a*c));
   root1=-b+sqrt(det)/(2*a);
   root2=-b-sqrt(det)/(2*a);  
   printf("the roots are \n%f\n%f",root1,root2);
 }
