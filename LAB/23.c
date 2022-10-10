// decimal to binary 
#include<stdio.h>

int main()
{
    int dno,bno,a[20],n=0,i=0;
    printf("Enter the decimal number :");
    scanf("%d",&dno);
    while (dno!= 0)
    {
        bno=dno%2;
        a[i]=bno;
        n++;
        i++;
        dno=dno/2;
    }
    for (i=n-1; i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
