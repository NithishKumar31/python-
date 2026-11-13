#include <stdio.h>

void printvalue(int a , char c );
void printtime(int a, char c);

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a); 
    for(int i=1; i<=a; i++)
    {
        printvalue(a-i,' ');
        printvalue(2*i-3,'$');
        printf("\n");
    }
    for(int j=a-1; j>=1; j--)
    {
        printvalue(a-j,' ');
        printvalue(2*j-3,'$');
        printf("\n");
    }
}
void printvalue(int a, char c)
{
    for(int i=1; i<=a; i++)
    {
        printf("%c", c);
    }
}