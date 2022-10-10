#include <stdio.h>

int main()
{
    int a[20], n, i, d, c = 0, j;
    printf("Enter the number of turms : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number you want to Delete : ");
    scanf("%d", &d);

    for (i = 0; i < n; i++)
    {
        if (a[i] == d)
        {
            c++;
            for (j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n = n - 1;
        }
    }
    if (c == 0)
    {
        printf("!!! Number is not in array !!!");
    }
    else
    {
        printf("Array is : ");
        printf("\n");
        for (i = 0; i < n; i++)
        {
            printf(" %d ", a[i]);
        }
    }
    return 0;
}
