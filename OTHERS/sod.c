#include<stdio.h>

int main()
{
    int n, a=0;
    scanf("%d",&n);
    while (n!=0)
    {
        a=a+n%10;
        n=n/10;
    }
    printf("sum is : %d",a);
    return 0;
}