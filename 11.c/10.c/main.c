#include<stdio.h>
int main()
{
    int Huan[100][100] = {0}; int x = 0; int y = 0;int N = 0;
    scanf("%d", &N);
    x = 1;  y = (N + 1)/2;
    Huan[1][(N+1)/2] = 1;
    for (int i = 2; i <= N*N; i++)
    {
        if(x == 1 && y != N)
            (void)(Huan[N][y+1] = i), (void)(x = N), y = y + 1;
        else if(x != 1 && y == N)
            (void)(Huan[x-1][1] = i), (void)(x = x-1), y = 1;
        else if(x == 1 && y == N)
            (void)(Huan[2][N] = i), (void)(x = 2), y = N;
        else if(x != 1 && y != N)
        {
            if(Huan[x-1][y+1] == 0)
                (void)(Huan[x-1][y+1] = i),(void)(x--),y++;
            else
                (void)(Huan[x+1][y] = i),x++;
        }
    }
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N ; j++)
            printf("%d ",Huan[i][j]);
        putchar('\n');
    }
    return 0;
}

