#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two numbers :\n");
    scanf("%d",&a);
    scanf("%d",&b);
    c=((a>b)?(a+b):(a-b));
    printf("Answer is :%d",c);
    return 0;
}