#include<stdio.h>
main()
{
    int p=1,d,n,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        p=p*(n%10);
        s=s+(n%10);
        n=n/10;
        d=p-s;
    }
    printf("%d",d);
    
}