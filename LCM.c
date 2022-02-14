#include<stdio.h>
int main()
{
    int v,k,l;
    scanf("%d %d",&v,&k);
    l=(v>k)?v:k;
    while(l)
    {
        if(l%v==0&&l%k==0)
        {
            printf("%d",l);
            break;
        }
        ++l;
    }
    return 0;
}