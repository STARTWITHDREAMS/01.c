#include <iostream>
using namespace std;
const int maxn = 1e5 + 5;
int nums[maxn];
int dp[maxn];
int solve_notlift(int x) {
	int maxlong = 0;
	for (int i = 1; i <= x; ++i) {
		if (nums[i] <= dp[maxlong]) {
			maxlong++;
			dp[maxlong] = nums[i];
		}
		else
		{
			int l = 1; int r = maxlong;
			int ans = 0;
			while (l <= r) {
				int mid = l + (r - l) / 2;
				if (dp[mid] < nums[i]) {
					r = mid - 1;
					ans = mid;
				}
				else
					l = mid + 1;
			}
			dp[ans] = nums[i];
		}
	}
	return maxlong;
}
int solve_lift(int x) {
	int maxlong = 0;
	for (int i = 1; i <= x; ++i) {
		if (nums[i] > dp[maxlong]) {
			maxlong++;
			dp[maxlong] = nums[i];
		}
		else
		{
			int l = 1; int r = maxlong;
			int ans = 0;
			while (l <= r) {
				int mid = l + (r - l) / 2;
				if (dp[mid] >= nums[i]) {
					r = mid - 1;
					ans = mid;
				}
				else
					l = mid + 1;
			}
			dp[ans] = nums[i];
		}
	}
	return maxlong;
}
int main() {
	int n = 0;
	while (cin >> nums[++n]);
	n--;
	dp[0] = 5005;
	cout << solve_notlift(n) << endl;
	dp[0] = 0;
	cout << solve_lift(n);
	return 0;
}