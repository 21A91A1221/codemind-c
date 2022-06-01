#include<stdio.h>
int main()
{
    int n,i,l=0,m=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            m=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    m++;
                }
            }
            if(m!=2)
            {
                l++;
            }
        }
    }
    printf("%d",l);
}