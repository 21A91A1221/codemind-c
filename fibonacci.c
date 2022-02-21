#include<stdio.h>
int main()
{
    int i,n,n1=0,n2=1,n3=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",n3);
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
    return 0;
}