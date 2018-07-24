#include<stdio.h>

void main()

 {

  int i,index,j=0,count=0,size=0;

  char a[50];

  gets(a);

  while(a[j]!='\0')

  {

    for(j;a[j]!=' ';j++)

    {

        if(a[j]=='\0')

           break;

	count++;


    }
  
    if(count>size)

       {

        size=count;

        index=j-size;

       }
    
    count=0;

    j++;
  }

  for(i=index;i<index+size;i++)

  {

  printf("%c",a[i]);

  }

 }
