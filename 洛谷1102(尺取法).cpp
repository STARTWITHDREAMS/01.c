#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 200005
long long a[maxn]; int N, C;
int main()
{
	int j = 1, k = 1; long long ans = 0;
	cin >> N >> C;
	for (int i = 1; i <= N; i++)
		cin >> a[i];
	sort(a + 1, a + 1 + N);
	for (int i = 1; i <= N; i++)
	{
		while (j <= N && a[j] - a[i] < C)
			j++;
		while (k <= N && a[k] - a[i] <= C)
			k++;
		if (a[j] - a[i] == C && a[k - 1] - a[i] == C)
			ans += k - j;
	}
	cout << ans;
	return 0;
}