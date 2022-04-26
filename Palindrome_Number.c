#include<stdio.h>
int main()
{
    int l,n,r,k=0,v,i;
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&n);
        v=n;
        while(n)
        {
            r=n%10;
            k=k*10+r;
            n=n/10;
        }
        if(v==k)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        r=0;
        k=0;
    }
    return 0;
}