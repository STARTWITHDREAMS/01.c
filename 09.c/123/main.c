#include<stdio.h>
double POW(int x)
{
    int i = 3;
    double mul = 4.0;
    for (i = 3; i <= x; i++)
    {
        mul = mul * 2;
    }
    return mul;
}
double MOD(double x)
{
    int i;
    for (i = 2; i < x / 2; i++)
    {
        if (x / i == (long long)(x / i))
            return 0;
    }
    return 1;
}
int main()
{
    int n = 0;
    double mul = 0.0;
    int i = 2;
    int count = 0;
    printf("Input:\n");
    scanf("%d", n);
    for (i = 2; i <= n; i++)
    {
        mul = POW(i) - 1;
        if (MOD(mul))
        {
            printf("2^%d-1=%.0lf\n", i, mul);
            count++;
        }
    }
    printf("count=%d\n", count);
}
