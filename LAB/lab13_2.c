#include<stdio.h>

int main()
{
    int i,j,r;
    printf("Enter the number of rows :");
    scanf("%d",&r);
    for (i=1;i<=r;i++)
    {
        for (j=r-i-1;j>=0;j--)
        {
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf(" * ");
        }
    printf("\n");

    }
    return 0;
}
