#include<stdio.h>
int main()
{
    int n,r,a[100]={0};
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if(a[r]==1)
        {
            break;
        }
        else
        {
            a[r]=1;
        }
        n=n/10;
    }
    if(n)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}