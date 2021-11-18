//求 d = (a,b) 和 s、t,使得d = sa + tb;
#include<stdio.h>
int count = -1;
int GCF(int x, int y)
{
    count++;
    return !y? x : GCF(y, x%y);
}
int S(int x, int y, int n)
{
    int m = x; int p = y; int r = 0;
    for(int i = 1; i <= n - 2; i++)
    {
        r = x%y;
        x = y;
        y = r;
    }
    if(n == 0)
        return 1;
    else if (n==1)
        return 0;
     else return (S(m,p,n-2) - x/y*S(m,p,n-1));
}
int T(int x, int y, int n)
{
    int m = x; int p = y; int r = 0;
    for(int i = 1; i <= n - 2; i++)
    {
       r = x%y;
       x = y;
       y = r;
    }
    if(n == 0)
       return 0;
    else if (n==1)
       return 1;
    else return (T(m,p,n-2) - x/y*T(m,p,n-1));
}
int main()
{
    int a = 0; int b = 0; int n = 0;
    scanf("%d%d",&a,&b);
    GCF(a,b);
    n = count;
    printf("%d\n",GCF(a,b));
    printf("%d = %d*%d + %d*%d\n",GCF(a, b),S(a,b,n),a,T(a,b,n),b);
    return 0;
}
//xn = (xn-2) - k(n-1)(xn-1)
//k = x/y;
