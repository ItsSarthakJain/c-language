int main() {
char a[100];
    
    int sum=0,m,j;
    gets(a);
    int l=strlen(a),i;
    for(i=0;i<l;i++)
        if(isalpha(a[i]))
        sum=sum+a[i];
    printf("%d",sum);
    return 0;
}