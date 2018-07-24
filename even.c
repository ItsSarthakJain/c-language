              ///check no is even then div by 4 0r 6
#include<stdio.h>
void main()
 {
  int no;
  printf("Enter the no ");
  scanf("%d",&no);
  if(no%2==0)
   {
     printf("No is even \nchecking divisiblity condition.....\n");
     if(no%4==0&&no%6==0)
               printf("no is divisible by 4 and 6 both");
     else if (no%4==0)
               printf("no is divisible by 4");
     else if (no%6==0)
               printf("no is divisible by 6");
    }
 }