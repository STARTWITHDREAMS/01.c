#include <iostream>
using namespace std;
int dp[105][105];
int map[105][105];
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n;++i)
		for(int j = 1;j <= n;++j)
		cin >> map[i][j];
	for(int i = 1;i <= n;++i)
		for(int j = 1; j <= n;++j){
			if(j == 1)
			dp[i][j] = min(dp[i-1][j],dp[i-1][j+1]) + map[i][j];
			else if(j == n)
			dp[i][j] = min(dp[i-1][j],dp[i-1][j-1])+map[i][j];
			else
				dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i-1][j+1])) + map[i][j];
		}
	int ans = dp[n][1];
	for(int i = 2; i <= n;++i)
	ans = min(ans,dp[n][i]);
	cout << ans;
}
