#include <stdio.h>

void nithish(int a ,  char c );

int main()
{
    int a ;

    printf("Enter a number: ");
    scanf("%d", &a); 

    for(int i=1; i<=a;  i++)
    {
        {
             nithish(i,'$');
             printf("\n");
        }
    }
    
    for(int k=a-1; k>=1; k--)
   {
        {
             nithish(k,'$');
             printf("\n");
        }
   }
}
void nithish(int a, char c)
{
    for(int i=1; i<=a; i++)
    {
        printf("%c", c);
    }
}