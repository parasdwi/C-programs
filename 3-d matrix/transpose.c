#include<stdio.h>

int main(){
    int a[50][50],b[50][50],r,c,i,j;
    printf("Columns of matrix:\n");
    scanf("%d",&c);
    printf("Rows of matrix:\n");
    scanf("%d",&r);
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter the element of %d row and %d column :",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of above matrix is :\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}