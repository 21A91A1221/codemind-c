#include<stdio.h>
int main()
{
    char s[100];
    int sum=0,i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            sum+=(s[i]-'0');
        }
    }
    printf("%d",sum);
}