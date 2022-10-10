// Table generator
#include <stdio.h>

int main()
{
    FILE *fp;
    int i, j, n;
    printf("Enter the numer upto which you wnt to write table: ");
    scanf("%d", &n);
    fp = fopen("Table.txt", "w");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < 11; j++)
        {
            fprintf(fp, "%d X %d =%d\n", i, j, i * j);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    return 0;
}