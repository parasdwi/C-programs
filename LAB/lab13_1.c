#include<stdio.h>

int main()
{
    int i,j,r;
    printf("Enter the number of rows :");
    scanf("%d",&r);
    for (i=r;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",i-j+1);
        }
        printf("\n");
    }
    return 0;
}