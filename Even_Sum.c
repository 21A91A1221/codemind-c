#include<stdio.h>
int main()
{
    int a[100],i,c,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c+=a[i];
        }
    }
    printf("%d",c);
}