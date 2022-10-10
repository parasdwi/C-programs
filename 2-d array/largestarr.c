#include <stdio.h>

int main()
{
    int a[19], n, i, j, lag, lag2;
    printf("Enter the number of turms : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    a[0] = lag;

    for (i = 0; i < n; i++)
    {
        if (lag < a[i + 1])
        {
            lag = a[i + 1];
        }
    }

    a[0] = lag2;

    for (i = 1; i < n; i++)
    {
        if (lag2 < a[i])
        {
            if(a[i] != lag)
            {
            lag2 = a[i];
            }
        }
    }

    printf("\n");
    printf("2nd Largest number is : %d", lag2);

    return 0;
}