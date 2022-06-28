#include<stdio.h>
int main()
{
    int i,j,n,c=0,s;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        c++;
        s=c;
        for(j=1;j<=i;j++)
        {
            printf("%d ",s);
            s++;
        }
        printf("
");
    }
}