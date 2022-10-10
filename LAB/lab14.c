#include<stdio.h>
#include<math.h>

int main()
{
    int num,rem, sto=0,ch=0,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        sto =sto*10+ (num%10);
        num/=10;
    }
    while (sto!=0)
    {
        rem=sto%10;
        printf("%d\n",rem);
        sto/=10;
    }
    return 0;
}