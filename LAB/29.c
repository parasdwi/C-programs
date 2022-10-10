#include <stdio.h>
int main()
{
    int a[50][50], b[50][50], c[50][50], r1, c1, r2, c2, i, j, k, sum = 0, t = 0;

    printf("Columns and rows of 1st matrix:\n");
    scanf("%d%d", &c1,&r1);

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter %d row and %d column element :", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Columns and rows of 2st matrix:\n");
    scanf("%d%d", &c2,&r2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter %d row and %d column element :", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 == r2)
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < r2; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("Multiplecaion of matrix is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("!!! Muliplecation is not possible !!!");
    }
    return 0;
}