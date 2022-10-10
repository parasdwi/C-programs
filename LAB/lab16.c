#include<stdio.h>
void areaofrec(int l,int b);
int main()
{
    int l,b;
    printf("enter ihe length and breadth of rect :");
    scanf("%d%d",&l,&b);
    areaofrec(l,b);
    return 0;
}
void areaofrec(int l,int b)
{
    int area;
    area= l*b;
    printf("%d",area);
}
