#include <iostream>
using namespace std;
const int maxn = 1e5 + 15;
int dp[maxn];
int nums[maxn];
int main() {
	int cnt = 0;
	int n = 0;
	int ans1 = 0,ans2 = 0;
	while (cin >> nums[++n]);
	for (int i = 1; i <= n - 1; ++i) {
		dp[i] = 1;
		for (int j = 1; j < i; ++j) {
			if (nums[j] >= nums[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		ans1 = max(ans1, dp[i]);
	}
	for (int i = 1; i <= n - 1; ++i) {
		dp[i] = 1;
		for (int j = 1; j < i; ++j) {
			if (nums[j] < nums[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		ans2 = max(ans2, dp[i]);
	}
	cout << ans1<< endl << ans2 ;
	return 0;
}