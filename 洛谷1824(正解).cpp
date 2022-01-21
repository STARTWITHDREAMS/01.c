#include <iostream>
#include <algorithm>
using namespace std;
#define maxn 1000010
int a[maxn], N, C;
bool P(int d)
{
	int k = 1, last = a[1];
	for (int i = 2; i <= N; i++)
		if (a[i] - last >= d)
			last = a[i], k++;
	return k >= C;
}
int main()
{
	cin >> N >> C;
	for(int i = 1; i <= N;i++)
		cin >> a[i];
	sort(a + 1, a + 1 + N);
	int L = 0, R = a[N] - a[1], ans, mid;
	while (L <= R)
		if (P(mid = L + R >> 1))
			ans = mid, L = mid + 1;
		else
			R = mid - 1;
	cout << ans;
	return 0;
}