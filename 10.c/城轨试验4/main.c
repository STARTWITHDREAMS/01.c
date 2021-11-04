#include<stdio.h>
double MUL(int x)
{
    int i = 1; double a = 1.0;
    for (i = 1; i <= x; i++)
    {
        a = a*10;
    }
    return a;
}
int main()
{
    double x = 0.0; double a = 0.0; int p = 0; double s = 0; int q = 0; int i = 1;
    printf("输入一个浮点数:\n");
    scanf("%lf", &x);
    a = x;
    while (a != (int)(a))
    {
        a = a*10;
        q++;
    }
    while (p != q)
           {
               s = s*10 + (int)a % 10;
               p++;
               a = (int)(a/10);
           }
    while (a)
        {
            s = s + (int)a%10/MUL(i);
            a = (int)(a/10);
            i++;
        }
    printf("%f",s);
    return 0;
}
