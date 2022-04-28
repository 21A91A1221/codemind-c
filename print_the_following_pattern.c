#include<stdio.h>
int main()
{
    int n,v,k;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    {
        for(k=1;k<=n;k++)
        {
            if(k+v==n+1 ||k-v==0)
            {
                printf("x");
            }
            else
            {
                printf("0");
            }
        }
        printf("
");
    }
    return 0;
}