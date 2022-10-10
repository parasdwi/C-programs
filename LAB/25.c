#include <stdio.h>

int main()
{
    int a[20], n, i, j, k;
    printf("Enter the number of elements :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n;)
        {
            if (a[i] == a[j])
            {
                n--;
                for (k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
            }
            else
            {
                j++;
            }
        }
    }
    printf("Array is : ");
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}