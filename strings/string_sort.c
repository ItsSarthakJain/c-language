

int main() {
char a[100],ch,temp;
    gets(a);
    int l=strlen(a);
    int i,j;
for(i=0;i<l-1;i++)
   {
   	  for(j=0;j<l-1;j++)
   	  	if(a[j]>a[j+1])
        {
   	  	temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;  
        }
   }
   puts(a);