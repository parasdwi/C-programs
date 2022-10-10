#include <stdio.h>

int main()
{
    int a[100], i, j, n, t;
    printf("Enter the size :");
    scanf("%d", &n);
    printf("Enter the elements :");
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}