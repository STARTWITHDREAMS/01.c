#include<stdio.h>
int main()
{int a,b;
	printf("����һ������\n");
	scanf("%d",&a);
	b=(a%3)||(a%5);
	b==0?printf("��\n"):printf("��\n");
return 0;
}