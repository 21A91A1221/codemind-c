#include<stdio.h>
main()
{
    int i,j;
    scanf("%d",&i);
    for( ;i>=1;i--)
    {
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    printf("
");
    }
}