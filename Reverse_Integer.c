#include<stdio.h>
int main()
{
    int p,v,r=0,l;
    scanf("%d",&p);
    while(p)
    {
        v=p%10;
        r=r*10+v;
        p=p/10;
    }
    printf("%d",r);
}