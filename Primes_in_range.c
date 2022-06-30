#include<stdio.h>
#include<math.h>
int main()
{
    int v,r,k,n,l=0,j;
    scanf("%d %d",&r,&v);
    for(k=r;k<=v;k++)
    {
        n=0;
        if(k==1)
        {
            continue;
        }
        for(j=2;j<=sqrt(k);j++)
        {
            if(k%j==0)
            {
                n++;
                break;
            }
        }
        if(n==0)
        {
            l++;
        }
    }
    printf("%d",l);
}