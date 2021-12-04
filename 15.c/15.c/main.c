#include<stdio.h>
long long Fun(int x, int y,int b[][30])
{
    if(b[x][y])
        return 0;
    else if(x == 0 || y == 0)
        return 1;
    else
        return Fun(x-1,y,b) + Fun(x,y-1,b);
}
int main()
{
    int m = 0; int n = 0; int s = 0; int t = 0;
    int a[9][2] = {{0,0},{-1,2},{-1,-2},{1,2},{1,-2},{-2,-1},{-2,1},{2,1},{2,-1}};
    int b[30][30] = {0};
    scanf("%d%d%d%d",&m,&n,&s,&t);
    for(int i = 0; i < 9; i++)
    {
        if(s + a[i][0] >= 0 && t + a[i][1] >= 0)
            b[s + a[i][0]][t + a[i][1]] = 1;
    }
    if(s == 0 && t == 0)
        printf("0\n");
    else
    printf("%lld\n",Fun(m, n, b));
    return 0;
}
