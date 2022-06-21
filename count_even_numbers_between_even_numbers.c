#include<stdio.h>
int main()
{
    int n,k,v[500],r=0;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<n-2;k++)
    {
        if(v[k]%2==0 && v[k+1]%2==0 && v[k+2]%2==0)
        {
            r++;
        }
    }
    printf("%d",r);
}