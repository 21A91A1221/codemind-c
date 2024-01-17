#include<stdio.h>
int main()
{
    int i,j,r,c,s=0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0||i==r-1||j==0||j==c-1)
            {
                continue;
            }
            else
            {
                s+=arr[i][j];
            }
        }
    }
    printf("%d",s);
    return 0;
}