#include<stdio.h>
int main()
{
    int l=0,m=0,s,v[500],n;
    scanf("%d",&n);
    for(s=0;s<n;s++)
    {
        scanf("%d",&v[s]);
    }
    for(s=0;s<n;s++)
    {
        if(s%2==0)
        {
            l+=v[s];
        }
        else
        {
            m+=v[s];
        }
    }
    printf("%d",l-m);
}