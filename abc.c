#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enterr second number:");
    scanf("%d",&b);
    printf("enter third number:");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("a is big ");
        }
        else if(c>a)
        {
            printf("c is big");
        }
        else
        {
            printf("a and b are equal and big");
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("b is big");
        }
        else if(c>b)
        {
            printf("c is big");
        }
        else
        {
            printf("b and c are equal and big");
        }
    }
    else
    {
        if(c>a)
        {
            printf("c is big");
        }
        else if(a>c)
        {
            printf("a b  is big");
        }
        else
        {
            printf("a b c are equal big");

        }
    }

}