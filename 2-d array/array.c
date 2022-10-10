#include <stdio.h>

int main()
{
    int a[10],n, i;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the numbers :");

    for (i = 0; i < n; i++)
    {
        scanf(" %d ", &a[i]);
    }

    printf("The array is :");

    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }


    return 0;
    getchar();
}