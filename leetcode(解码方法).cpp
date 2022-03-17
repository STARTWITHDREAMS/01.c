#include <iostream>
using namespace std;
const int maxn = 5005;
string s;
int nums[maxn];
long long dp[maxn];
int main(){
	cin >> s;
	int len = s.length();
for(int i = 0; i < len;++i)
    nums[i] = s[i] - '0';
	if(nums[0] == 0)
		dp[0]  = 0;
	else
		dp[0] = 1;
	if(len > 1 && nums[0] > 0 && 10 * nums[0] + nums[1] <= 26 && nums[1] > 0)
		dp[1] = 2;
	else if(len > 1 && nums[0] > 0 &&( 10 * nums[0] + nums[1] > 26 && nums[1] > 0||nums[1] == 0 && nums[0] < 3))
		dp[1] = 1;
	else if(len > 1 &&( nums[0] == 0 || nums[1] == 0 && nums[0] >= 3))
		dp[1] = 0;
	for(int i = 2; i < len; ++i){
        if(nums[i] == 0 && (nums[i-1] >= 3||nums[i-1] == 0))
            return 0;
		if(nums[i-1] * 10 + nums[i] <= 26 && nums[i-1] != 0&&nums[i] != 0)
			dp[i] = dp[i-2] + dp[i-1];
		else if(nums[i] == 0 && nums[i-1] < 3)
			dp[i] = dp[i-2];
        else
            dp[i] = dp[i-1];
    }
	cout << dp[len-1];
	return 0;
    }