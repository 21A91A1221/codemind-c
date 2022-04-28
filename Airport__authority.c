#include<stdio.h>
int main()
{
    int v[2004],k,n,i,a=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(v[i]<=k)
        {
           a++; 
        }
        else
        {
            a=a+2;
        }
    }
    printf("%d",a);
    return 0;
}