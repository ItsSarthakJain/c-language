#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
char a[100];
    
    int sum=0,m,j;
    gets(a);
    int l=strlen(a),i;
    for(i=0;i<l;i++)
    {
        if((isdigit(a[i]))==1)
        {   
            for(j=48;j<=57;j++)
                if(j==a[i])
                    sum=sum+(j-48);
        }
    }
    printf("%d",sum);
    return 0;
}



/*

or

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
char a[100];
    
    int sum=0,m,j;
    gets(a);
    int l=strlen(a),i;
    for(i=0;i<l;i++)
    {
        if((isdigit(a[i]))==1)
        {   
            sum=sum+(a[i]-48);
        }
    }
    printf("%d",sum);
    return 0;
}

*/