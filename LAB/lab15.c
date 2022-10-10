#include<stdio.h>
void sumofodd(int num);
int main()
{
    int num;
    scanf("%d",&num);
    sumofodd(num);
    return 0;
}
void sumofodd(int num)
{
    int rem,sum=0;
    while (num!=0)
    {
        rem=num%10;
        if (rem%2!=0)
        {
            sum=sum+rem;
        }
        num/=10;
    }
    printf("%d",sum);
}