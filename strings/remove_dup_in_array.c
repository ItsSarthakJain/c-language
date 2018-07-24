int a[100],m,size,i,j,s,flag=0;
scanf("%d",&size);
for(i=0;i<size;i++)
    scanf("%d",a[i]);
for(i=size-1;i>=0;i--)
{ 
    j=a[i];
    flag=0;
    for(s=0;s<i;s++)
        if(j==a[s])
            flag=1;
    if(flag==0)    
        printf("%d",a[i]);
}

    return 0;
}
