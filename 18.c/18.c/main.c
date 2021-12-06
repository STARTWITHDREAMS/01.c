//洛谷p1028
#include<stdio.h>
int a[100] = {0,1,0};
int Num(int n)
{
    int sum = 1;
    if(a[n]!=0) return a[n];
    else
        for(int i = n/2; i >= 1; i--)
            sum+=Num(i);
    return a[n] = sum;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    printf("%d\n",Num(n));
    return 0;
}

