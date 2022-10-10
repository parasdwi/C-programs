#include<stdio.h>

int main()
{
    int i,j,ch=0;
    for (i=1;i<=300;i++)
    {
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {
                ch++;
            }
        }
        if (ch==0)
        {
            printf("%d ",i);
        }
        ch=0;
    }
    return 0;
}