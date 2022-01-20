#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 200005
int a[maxn], N, C;
int main()
{
	long long ans = 0;
	cin >> N >> C;
	for (int i = 1; i <= N; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + N);
	for (int i = 1; i <= N; i++)
		ans += upper_bound(a + 1, a + 1 + N, a[i] + C) - lower_bound(a + 1, a + 1 + N, a[i] + C);
	cout << ans;
	return 0;
}