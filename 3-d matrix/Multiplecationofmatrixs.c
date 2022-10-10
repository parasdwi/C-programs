#include <stdio.h>
int main()
{
    int a[50][50], b[50][50], c[50][50], r1, c1, r2, c2, i, j, k, sum = 0, t = 0;

    printf("Columns of 1st matrix:\n");
    scanf("%d", &c1);
    printf("Rows of 1st matrix:\n");
    scanf("%d", &r1);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter the element of %d row and %d column :", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("1nd Matrix is :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Columns of 2st matrix:\n");
    scanf("%d", &c2);
    printf("Rows of 2nd matrix:\n");
    scanf("%d", &r2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter the element of %d row and %d column :", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("2nd Matrix is :\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
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
        printf("!!! Muliplecation is not possible (Bhag bho***i k) !!!");
    }
    return 0;
}