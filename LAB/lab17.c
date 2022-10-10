#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Factorial is :%d", factorial(n));
    return 0;
}
int factorial(int n)
{
    int i, fac=1;
    for (i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}