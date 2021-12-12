//洛谷p1036选数
#include <stdio.h>
#define Maxn 25
long long Sum[10000] = {0}; int count = 0;
int prime(int sum)
{
    for(int i = 2; i * i <= sum; i++)
    {
        if(sum % i == 0)
            return 0;
    }
    return 1;
}
int F(int k, int sum, int end, int start,int *p)
{
    int ans = 0;
    if(k == 0)
    {
        Sum[count++] = sum;
        return prime(sum);
    }
    else
    {
        for(int i = start + 1; i <= end; i++)
            ans += F(k-1, sum + p[i], end,i,p);
    }
    return ans;
}
int main()
{
    int k = 0; int n = 0; int a[Maxn] = {0};
    scanf("%d %d",&n,&k);
    for(int i = 1; i <= n; i++)
        scanf("%d",&a[i]);
    printf("%d\n",F(k,0,n,0,a));
    for(int i = count - 1; i >= 0; i--)
        printf("%lld\n",Sum[i]);
    return 0;
}

