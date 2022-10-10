int main()
{
    int a, b, c;

    printf("Enter the 1st side of triangle: ");
    scanf("%d", &a);
    printf("Enter the 2nd side of triangle: ");
    scanf("%d", &b);
    printf("Enter the 3rd side of triangle: ");
    scanf("%d", &c);

    if (a*a == b*b + c*c || b*b == a*a +c*c || c*c==a*a + b*b)
    {
        printf("RI");
    }
    else
    {
        printf("not");
    }
}

