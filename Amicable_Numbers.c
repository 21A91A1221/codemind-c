#include<stdio.h>
int main()
{
    int p,v,s=0,i,j,rem=0;
    scanf("%d",&p);
    scanf("%d",&v);
    for(i=1;i<p;i++)
    {
        if(p%i==0)
        {
            rem=rem+i;
        }
    }
    for(j=1;j<v;j++)
    {
        if(v%j==0)
        {
            s=s+j;
        }
    }
    if(s==p && rem==v)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}