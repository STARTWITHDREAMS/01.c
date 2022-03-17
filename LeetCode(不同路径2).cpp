#include <iostream>
using namespace std;
bool map[105][105];
int dp[105][105];
int main() {
	int m,n;
	cin >> m >> n;
	for(int i = 0; i < m;++i)
		for(int j = 0; j < n; ++j)
			cin >> map[i][j];
	for(int j = 0; j < n; ++j)
		if(map[0][j])
			break;
		else
		 dp[0][j] = 1;
	for(int i = 0; i < m; ++i)
		if(map[i][0])
			break;
		else
		  dp[i][0] = 1;
	for(int i = 1; i < m; ++i)
		for(int j = 1; j < n; ++j){
			if(!map[i][j])
			dp[i][j] =  dp[i][j-1] +  dp[i-1][j];
		}
	cout << dp[m-1][n-1];
	return 0;
}