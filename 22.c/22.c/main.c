//洛谷p1164小A点菜
#include<stdio.h>
#define Maxn 101
int main()
{
    int a[Maxn] = {0}; int n = 0; int m = 0; int f[Maxn][10001] = {0};
    scanf("%d %d",&n,&m);
    for(int i = 1; i <= n; i++)
        scanf("%d",&a[i]);
    for(int i = 0; i < n; i++)
        f[i][0] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
        {
            if(j < a[i])
                f[i][j] = f[i - 1][j];
            else
                f[i][j] = f[i-1][j] + f[i - 1][j - a[i]];
        }
    printf("%d\n", f[n][m]);
    return 0;
}

