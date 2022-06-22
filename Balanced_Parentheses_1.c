#include<stdio.h>
int main()
{
    char expression[100];
    int x=0,i=0;
    scanf("%s",expression);
    while(expression[i]!=NULL)
    {
        if(expression[i]=='(')
        {
            x++;
        }
        else if(expression[i]==')')
        {
            x--;
            if(x<0)
            break;
        }
        i++;
    }
    if(x==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}