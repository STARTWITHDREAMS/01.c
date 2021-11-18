#include<stdio.h>
int GCF(int x, int y)
{
    return !y? x : GCF(y, x%y);
}

int main()
{
	int x1 = 1; int x2 = 0; int y1 = 0; int y2 = 1; int a,b; int tem = 0; int s; int t; int m ; int n; int p;
	scanf("%d%d",&a,&b);
	p = GCF(a,b);
	m = a; n = b;
	s = !(a%b)?1:0;
	while(a%b)
	{
	int g = a/b;
	tem = a%b; a = b; b = tem;
	tem = x2; x2 = x1 -g*x2; x1 = tem ;
	}
	s = x2;
	t = !(m%n)?0:1;
	while(m%n)
	{
	int g = m/n;
	tem = m%n; m = n; n = tem;
	tem = y2; y2 = y1 - g*y2; y1 = tem ;
	}
	t = y2;
	printf("%d %d %d",p,s,t);
    return 0;
}
