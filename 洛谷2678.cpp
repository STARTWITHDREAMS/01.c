#include <iostream>
using namespace std;
int L, N, M;
int a[50005];
bool check(int x) {
	int t = 0; int cnt = M;
	for (int i = 0; i <= N && cnt >= 0; ++i) {
		if (a[i + 1] - a[t] < x)
			cnt--;
		else
			t = i + 1;
	}
	if ( cnt >= 0)
		return 1;
	else
		return 0;
}
int main() {
	cin >> L >> N >> M;
	for (int i = 1; i <= N; ++i)
		cin >> a[i];
	a[N + 1] = L;
	int left = 1, right = L, ans = -1, mid = 0;
	while (left <= right) {
		mid = left + (right - left) / 2;
		if (check(mid)) {
			ans = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	cout << ans;
	return 0;
}