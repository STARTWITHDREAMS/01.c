#include<stdio.h>
int main()
{
	char ch; int n = 0, i = 1, j = 1, q = 1;
	printf("请输入一个大写字母：\n");
	scanf(" %c", &ch);
	n = ch - 'A'+1;
	for (i = 1; i <= n;i++ )
	{
		for (j = 1; j<= (n-i); j++)
		{
			putchar(' ');
		}
		for (j=j,q=1;j <= n;j++,q++)
		{
			printf("%c",'A'+ q - 1);
		}
		for (j=j,q=1;j <= n+i-1;j++,q++)
		{
			printf("%c",'A'+ i - 1 - q);
		}
		putchar('\n');
	}
	return 0;
}