#include<stdio.h>
#include<math.h>
int main()
{
    int i,ch,rem,sum=0;
    
    for (i=100;i<=500;i++)
    {
        ch=i;
        while (ch!=0)
        {
            rem=ch%10;
            sum += rem*rem*rem;
            ch/=10;
        }
        if (i==sum)
        {
            printf("%d ",i);
        }
        sum=0;
    }
    return 0;
}