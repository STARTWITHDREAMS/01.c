#include<stdio.h>
int main()
{
    int x = 0; int a = 23; int b = 0; int c = 0;
    printf("这里是23根火柴游戏!!\n注意：最大移动火柴数目为三根\n");
    while (1)
    {
        do
        {
            printf("请输入移动的火柴数目:\n");
            scanf("%d", &x);
            if (x > 3)
                printf("对不起！您输入了不合适的数目，请点击任意键重新输入\n");
        }
        while (0 >= x || x > 3);
        c = a - x;
        if (c <= 0)
        {
            printf("您移动的火柴数目为:%d\n您移动后剩下的火柴数目为:%d\n对不起!您输了!\n", x, c);
            break;
        }
        b = (c - 1) % 4;
        if (b == 0)
           b = 1;
        a = a - b - x;
        printf("您移动的火柴数目为:%d\n您移动后剩下的火柴数目为：%d\n计算机移动的火柴数目为:%d\n计算机移动后剩下的火柴数目为:%d\n", x, c, b, a);
        if (a <= 0)
        {
            printf("恭喜您！您赢了!\n");
            break;
        }
    }
    return 0;
    }

