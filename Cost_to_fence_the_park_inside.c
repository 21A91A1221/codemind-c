#include<stdio.h>
int main()
{
    int l,area,b,w,c,cost;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    if(l<=w+w || b<=w+w)
    {
        printf("Impossible");
    }
    else
{
    area = l*b-((l-2*w)*(b-2*w));
    cost=area*c;
    printf("%d",cost);
}
return 0;
}