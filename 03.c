#include<stdio.h>
int main()
{int a,b;
	printf("输入一个数：\n");
	scanf("%d",&a);
	b=(a%3)||(a%5);
	b==0?printf("真\n"):printf("假\n");
return 0;
}