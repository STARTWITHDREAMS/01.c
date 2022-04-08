#include<iostream>
#include<cstring>
using namespace std;
const int maxn = 2e4+5;
int dp[52][maxn];
int food[52],num[52];
int main(){
	int m,n;
	cin >> m >> n;
	memset(dp,0x3f,sizeof(dp));
	dp[0][0] = 0;
	for(int i = 0; i < n;++i){
	cin >> food[i] >> num[i];
}
int tmp = 0;
for(int i = 1; i <= n;++i)
	for(int j = 0; j <= m;++j)
		for(int k = 0; k <= num[i-1];++k)
			if(k*food[i-1] <= j)
			dp[i][j] = min(dp[i][j],dp[i-1][j-k*food[i-1]]+k);
	if(dp[n][m] > 2000)
	cout << "><";
	else
	cout << dp[n][m];
	return 0;
}