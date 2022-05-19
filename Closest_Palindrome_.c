#include<stdio.h>
int palindrome(int n)
{
    int r,s=0,t=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(t==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
 }
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        if(palindrome(i))
    {
        break;
    }
    }
    for(j=n+1;;j++)
    {
        if(palindrome(j))
        {
            break;
        }
    }
    if(j-n==n-i)
    {
        printf("%d %d",i,j);
    }
    else if(j-n>n-i)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d",j);
    }
}