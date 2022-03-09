#include <iostream>
#include <cstring>
using namespace std;
int dp[2005][2005];
string A, B;
int main() {
	cin >> A >> B;
	int len1 = A.length();  int len2 = B.length();
	for (int i = 1; i <= len1; ++i) {
		dp[i][0] = i;
		for (int j = 1; j <= len2; ++j) {
			dp[0][j] = j;
			if (A[i - 1] == B[j - 1])
				dp[i][j] = dp[i - 1][j - 1];
			else
				dp[i][j] = min(min(dp[i - 1][j] + 1, dp[i][j - 1] + 1), dp[i - 1][j - 1] + 1);
		}
	}
	cout << dp[len1][len2];
	return 0;
}