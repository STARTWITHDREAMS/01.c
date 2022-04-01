#include <iostream>
using namespace std;
int matrix[1005][1005],sum[1005][1005];
int T,m,n,x,y;
int main(){
	cin >> T;
	int ans = 0;
	while(T--){
		cin >> m >> n >> x >> y;
		for(int i = 1; i <= m;++i)
		 for(int j = 1; j <= n;++j){
		  cin >> matrix[i][j];
		  sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + matrix[i][j];
	}
	 for(int i = 1;i <= m;++i)
	 	for(int j = 1;j <=n;++j){
	 		if(i-x >= 0&&j-y>=0)
	 		 ans = max(ans,sum[i][j] - sum[i][j-y]-sum[i-x][j]+sum[i-x][j-y]);
		 }
		 cout << ans << endl;
	}
	return 0;
}