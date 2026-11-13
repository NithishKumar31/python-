#include <stdio.h>

void printvalue(int a , char c );

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a); 
    


    for(int i=1; i<=a;  i++)
    {
             printvalue(a-i,' ');
             printvalue(i,'$');
             printf("\n");
    }

    for(int s=a-1; s>=1;  s--)
    {
        
             printvalue(a-s,' ');
             printvalue(s,'$');
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



  
