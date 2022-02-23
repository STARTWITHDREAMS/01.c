#include <iostream>
#include <algorithm>
using namespace std;
int N, M, C;
int cow[100005];
bool check(int x) {
	int cnt = 2, rest = M;int t = 1;
	for (int i = 1; i < N; i++, cnt++)//每个车的牛数可以小于限制数;
		if (cnt > C||cow[i+1] - cow[t] > x)
			cnt = 1, t = i + 1, rest--;
	if (rest <= 0)
		return 0;
	else
		return 1;
}
int main() {
	cin >> N >> M >> C;
	for (int i = 1; i <= N; ++i)
		cin >> cow[i];
	sort(cow + 1, cow + 1 + N);
	int l = 0, r = cow[N]-cow[1], ans = 0, mid = 0;
	while (l <= r) {
		mid = l + (r - l) / 2;
		if (check(mid)) {
			ans = mid;
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	cout << ans;
	return 0;
}