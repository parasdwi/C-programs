#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the 1st side of triangle: ");
    scanf("%d", &a);
    printf("Enter the 2nd side of triangle: ");
    scanf("%d", &b);
    printf("Enter the 3rd side of triangle: ");
    scanf("%d", &c);

    printf("\n");
    if ((a < c + b) && (b < a + c) && (c < a + b))
    {
        if (a != b && a != c && b != c)
        {
            printf("---> Scalen Triangle");
        }
        else if (a == b && a == c && b == c)
        {
            printf("---> Equaletral Triangle");
        }
        else if ((a == b && a != c) || (b == c && b != a) || (c == a && c != b))
        {
            printf("---> Isocales Triangle");
        }
        else
        {
            printf("**********************");
        }

        printf("\n");
    
        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
        {
            printf("---> Right angled tringle");
        }
        else
        {
            printf("---> Not a right angled triangle");
        }
    }
    else
    {
        printf("!!!! Triangle is not possible !!!!");
    }
}