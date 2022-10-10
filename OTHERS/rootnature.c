#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, x, y, d;
    d = (b * b) - 4 * a * c;
    x = -b / a;
    y = sqrt(d) / a;
    printf("Enter the coefficient of x^2 :");
    scanf("%d", &a);
    printf("Enter the coefficient of x :");
    scanf("%d", &b);
    printf("Enter the constant:");
    scanf("%d", &c);
    if (d = 0)
    {
        printf("Roots are real and equal ");
    }
    else if (d > 0)
    {
        printf("Roots are real and distinct ");
    }
    else
    {
        printf("Roots are imaginary ");
    }
    return 0;
}
