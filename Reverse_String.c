#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int i,n;
    scanf("%[^
]s",name);
    n=strlen(name);
    for(i=n-1;i>=0;i--)
    {
    printf("%c",name[i]);
    }
    return 0;
}
