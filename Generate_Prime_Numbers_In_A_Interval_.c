#include<stdio.h>
int main()
{
    int v,k,i,j,m;
    scanf("%d %d",&v,&k);
    for(i=v;i<=k;i++)
    {
    m=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            m++;
        }
    }
    if(m==2)
    {
        printf("%d
",i);
    }
    }
}