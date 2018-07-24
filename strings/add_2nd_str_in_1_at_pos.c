#include <stdio.h>
#include <string.h>
int main() {
    char a[100],b[20],c[200];
    int i,j,pos,m=0,s=0;
    gets(a);
    gets(b);
    int l1=strlen(a);
    int l2=strlen(b);
    scanf("%d",&pos);
    for(i=0;i<l1+l2;i++)
    { 
        if(i==pos)
        {
            for(j=0;j<l2;j++)
            {
                c[i]=b[s];
                s++;
                i++;
            }
        }
        if(i!=pos)
        {
          c[i]=a[m];
            m++;
        }
    }
    c[i]='\0';
    puts(c);
    return 0;
}
