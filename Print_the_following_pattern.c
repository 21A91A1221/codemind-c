#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j==n+1 || i-j==0)
            {
                printf("%d ",i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}