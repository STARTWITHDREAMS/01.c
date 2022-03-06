#include <iostream>
using namespace std;
long long dp[1005][1005];
int nums[1005][1005];
int r;
int main(){
	cin >> r;
	for(int i = 1; i <= r; ++i)
		for(int j = 1; j <= i; ++j)
			cin >> nums[i][j];
	for(int i = r; i >= 1; --i)
		for(int j = 1; j <= i; ++j)
			dp[i][j] = max(dp[i+1][j],dp[i+1][j+1]) + nums[i][j];
	cout << dp[1][1];
	return 0;
}