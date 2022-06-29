#include<stdio.h>
#include<math.h>
int main()
{
    long long int a;
    scanf("%lld",&a);
    if (a<0)
    {
        long double b=a/10.0;
        long long int res=floor(b);
        printf("%lld",res);
    }
    else
    {
        long long int res=a/10;
        printf("%lld",res);
    }
    return 0;
}