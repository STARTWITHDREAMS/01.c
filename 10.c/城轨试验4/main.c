
//马路移树问题，洛谷p1047
#include<stdio.h>
int main()
{
    int L = 0; int m = 0; int tree[10000] = {0}; int i = 0; int j = 0; int a; int b;
    scanf("%d%d",&L,&m);
    for (i = 1;i <= m ;i++ )
    {
        scanf("%d%d",&a,&b);
        for (j = a; j <= b; j++)
        {
            tree[j] = 1;
        }
    }
    int ans = L + 1;
    for (i = 0; i <= L; i++)
    {
        if (tree[i] == 1)
            ans = ans - 1;
    }
    printf("%d\n",ans);
    return 0;
}
