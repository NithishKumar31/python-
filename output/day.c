#include <stdio.h>

void nithish(int a , char c );

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a); 
    


    for(int i=1; i<=a;  i++)
    {
        {
             nithish(i,'$');
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



  
