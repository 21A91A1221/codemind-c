#include<stdio.h>
main()
{
    int n,r,lar=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(lar<r)
        {
            lar=r;
        }
        n=n/10;
    }
    printf("%d",lar);
}