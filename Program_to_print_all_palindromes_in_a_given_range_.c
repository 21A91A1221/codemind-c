#include<stdio.h>
int main()
{
    int i,f,v,t,s,r;
    scanf("%d
%d",&i,&f);
    for(v=i;v<=f;v++)
    {
        t=v;
        s=0;
        while(t>0)
        {
            r=t%10;
            s=s*10+r;
            t=t/10;
        }
        if(s==v)
        {
            printf("%d ",s);
        }
    }
    return 0;
}