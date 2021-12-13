
#include <stdio.h>
int main()
{
    int k = 0; int n = 0; int a[25] = {0}; int sum[25][10000] = {0}; int i,j = 0,m = 0; int b[10000] = {0}; int count = 0;
    scanf("%d %d",&k, &n);
    for( i = 1; i <= n; i++)
        scanf("%d",&a[i]);
    for( i = 1; i <= k; i++)
        for( j = i ; j <= n; j++)
            for(m = j; m <= n; m++)
            {
                sum[i][m] = sum[i-1][j-1] + a[m];
                if(i != 1)
                b[++count] = sum[i][m];
            }
    for(int i = 1; i <= n; i++)
        printf("%d ",a[i]);
    for(int i = 1; i <= count; i++)
    {
        if(b[i]!=0)
            printf("%d ",b[i]);
    }
    return 0;
}
