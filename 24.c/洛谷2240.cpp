#include<iostream>
#include<algorithm>
using namespace std;
struct coin
{
	int m;
	int v;
}a[101];
bool cmp(coin a, coin b)
{
	return a.v * b.m > b.v * a.m;
}
int main()
{
	int N, T; double sum = 0,ans = 0;
	cin >> N >> T;
	for (int i = 0; i < N; i++)
		cin >> a[i].m >> a[i].v;
	sort(a, a + N, cmp);
	for (int i = 0; i < N; i++)
	{
		if (T <= 0)
			break;
		else if (T < a[i].m)
			sum +=  double(a[i].v)/a[i].m *T, T = 0;
		else
			sum += a[i].v,T-=a[i].m;
	}
	printf("%.2f",sum);
	return 0;
}