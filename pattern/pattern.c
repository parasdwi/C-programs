#include<stdio.h>

int main(){
    int i,j,r;
    char c;
    scanf("%d",&r);
    for (i=0;i<r;i++)
    {
        for (j=0;j<i+1;j++)
        {
            c=j+65;
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}