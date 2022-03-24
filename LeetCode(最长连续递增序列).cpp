#include<iostream>
using namespace std;
const int maxn = 1e4+5;
int dp[maxn];
int nums[maxn];
int ans = 0;
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n;++i)
		cin >> nums[i];
	for(int i = 1; i<=n;++i){
		if(nums[i] > nums[i-1])
			dp[i] = dp[i-1] + 1;
		else
			dp[i] = 0;
		ans = max(ans,dp[i]);
	}
	cout << ans;
	return 0;
}