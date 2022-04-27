#include<stdio.h>
int main()
{
    int n;
    float r,i,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=1/i;
        j=j+r;
    }
    printf("%.2f",j);
    return 0;
}