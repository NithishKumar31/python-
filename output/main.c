#include <stdio.h>

int main()
{
    int a, b;
    float c, d;
    double e, f;
    char g, h;
     
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter two floats: ");
    scanf("%f %f", &c, &d);

    printf("Enter two doubles: ");
    scanf("%lf %lf", &e, &f);

    printf("Enter two characters: ");
    scanf(" %c %c", &g, &h);

    printf("--- Results ---\n");

    printf("Integer sum = %d\n", a + b);
    printf("Float sum = %.2f\n", c + d);
    printf("Double sum = %.2lf\n", e + f);
    printf("Character sum = %d%d", g + h);

    return 0;
}
