#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enterr second number:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("a is big");
    }
    else if(b>a)
    {
        printf("b is big");
    }
    else
    {
        printf("a and b is equal");
    }
}