#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d %d",&i,&j);
    if(i%2==0 || j%2==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
    return 0;
}