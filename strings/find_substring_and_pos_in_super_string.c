+-#include <stdio.h>
#include <string.h>
int main() 
{
    char b[20],a[100];
    gets(b);
    gets(a);
    int i,j,index=0,count=0,l=strlen(a),l2=strlen(b),flag=0;
    for(i=0;i<l2;i++)
    {
        char ch=b[i];
        for(j=index;j<l;j++)
        {
            if(a[j]==ch)
            {
                index=j+1;
                l=j+l2;
                count++;
                break;
            }
            else if(count<l2)
            {
                index=0;
                l=strlen(a);
		i=0;
            }
            else
                count=0;
        }
    }
    if(count==l2)
        printf("%d",j-l2+2);
    else
        printf("0");
    return 0;
}
