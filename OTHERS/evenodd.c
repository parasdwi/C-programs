#include<stdio.h>

int main()
{   
    int n;
    printf("Entr the numbers : ");
    scanf("%d",&n);

    if ((n & 1)==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}