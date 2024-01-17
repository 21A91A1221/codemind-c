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
            s=s+arr[i][j];
        }
    }
    printf("%d",s);
    return 0;
}