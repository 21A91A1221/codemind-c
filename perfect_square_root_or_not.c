#include<stdio.h>
#include<math.h>
main()
{
    int m,n;
    float p;
    scanf("%d",&n);
    p=sqrt(n);
    m=p;
    if(p==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}