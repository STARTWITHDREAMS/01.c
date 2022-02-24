#include <bits/stdc++.h>
using namespace std;
int barr[6][6],vis[6][6];
int ans,sx,sy,fx,fy,N,M,T;
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};
void dfs(int x,int y){
	if(x == fx&&y == fy){
		ans++;
		return;
	}
	for(int i = 0; i < 4; ++i){
		int xx = x+dx[i]; int yy = y + dy[i];
		if(xx >= 1 && yy >= 1 && xx <= N && yy <= M && !barr[xx][yy] && !vis[xx][yy]){
			vis[xx][yy] = 1;
			dfs(xx,yy);
			vis[xx][yy] = 0;
		}
	}
}
int main(){
	int tx = 0,ty = 0;
	cin >> N >> M >> T >> sx >> sy >> fx >> fy;
	for(int i = 1; i <= T; ++i)
	{
		cin >> tx >> ty;
		barr[tx][ty] = 1;
	}
	vis[sx][sy] = 1;
	dfs(sx,sy);
	cout << ans;
	return 0;
}