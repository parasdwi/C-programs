// binary to DECIMAL
#include <stdio.h>
#include <math.h>

int main()
{
    int bno, dno = 0,i = 0;
    printf("Enter the Binary number :");
    scanf("%d", &bno);
    while (bno != 0)
    {
        if (bno & 1)
        {
            dno = dno + pow(2, i);
        }
        bno = bno / 10;
        i++;
    }
    printf("Decimal no is : %d", dno);
    return 0;
}
