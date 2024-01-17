#include<stdio.h>
int main()
{
    int i,j,r,c,s=0,mx;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    mx=0;
    for(j=0;j<c;j++)
        {
            s=0;
            for(i=0;i<r;i++)
            {
                s+=arr[i][j];
            }
            if(s>mx)
            {
                mx=s;
            }
        }
    printf("%d",mx);
    return 0;
}