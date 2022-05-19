#include<stdio.h>
int main()
{
    int a[100],i,t=0,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==k)
        {
           t++;
        }
    }
    printf("%d",t);
 }
