#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, i, n;
    printf("Enter the length if array: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter the values\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("Arry is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    return 0;
}