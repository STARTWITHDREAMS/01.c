#include <bits/stdc++.h>
using namespace std;
int n,m,mp[1005][1005],ans,flag;
int vis[1005][1005];
int w[4][2] = {1,0,0,-1,0,1,-1,0};
void check(int x,int y,int val){
	if(x == n){
		flag = 1;
		return;
	}
	for(int i = 0; i < 4; ++i){
		int sx = x + w[i][0]; int sy = y + w[i][1];
			if( sx<1 || sx>n ||sy < 1 || sy > m||mp[sx][sy] > val||vis[sx][sy])
			continue;
			else{
				vis[sx][sy] = 1;
				check(sx,sy,val);
		}
		if(flag)
			break;
	}
}
int main() {
	cin >> n >> m;
	int maxn = 0;
	for(int i = 1;i <= n; ++i)
		for(int j = 1; j <= m; ++j)
			cin >> mp[i][j],maxn = max(mp[i][j],maxn);
	int l = 0,r  = maxn,mid;
	while(l <= r){
		memset(vis,0,sizeof(vis));
		mid = l + ( r - l)/2;
		check(1,1,mid);
		if(flag){
			ans = mid;
			r = mid - 1;
		}
		else
			l = mid + 1;
		flag = 0;
	} 
	cout << ans;
	return 0;
}