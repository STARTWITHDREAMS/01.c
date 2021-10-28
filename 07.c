#include <stdio.h>
int main()
{
    int a = 0, i = 0; int x = 0;
    do
    {
        printf("请输入需要分解的正整数:\n");
        scanf("%d",&x);
        if (x == 0)
        {
            printf("谢谢使用，再见!\n");
            break;
        }
        printf("分解质因数的结果为:%d=",x);
        while (x>1)
        {
            if (x%2 == 0)
            {
                x = x/2;
                if (x==1)
                    printf("2\n");
                else
                    printf("2*");
            }
            else
            {
                for (i = 3; i <= x/2; i+=2)
                {
                    a = x%i;
                    if (a == 0)
                    {
                        printf("%d*",i);
                        x = x/i;
                        break;
                    }
                }
            }
            if(i > x/2)
            {
                printf("%d\n",x);
                break;
            }
        }
    }while(1);
    return 0;
}
