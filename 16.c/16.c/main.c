//洛谷p1044
#include<stdio.h>
int Fun(int n)
{
    int sum = 0;
    if(n == 0) return 1;
    for(int i = 0; i <= n - 1; i++)
        sum += Fun(i) * Fun(n-1-i);
    return sum;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    printf("%d\n",Fun(n));
    return 0;
}

