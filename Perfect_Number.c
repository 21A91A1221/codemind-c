#include<stdio.h>
int main()
{
    int n,sum=0,r,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        r=n%i;
      if(r==0)
      {
          sum=sum+i;
      }
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
