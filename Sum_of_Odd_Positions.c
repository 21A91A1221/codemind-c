#include<stdio.h>
int main()
{
    int i,a[100],n,op;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            op+=a[i];
        }
    }
printf("%d",op);
}