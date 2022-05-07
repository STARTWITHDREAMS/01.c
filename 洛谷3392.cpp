#include<iostream>
using namespace std;
const int maxn = 1e7;
struct node{
	int x;
	int y;
}T[maxn];
int main(){
	int n,m;
	cin >> n >> m;
	char a[55][55];
	for(int i = 1; i <= n;++i)
		for(int j = 1; j <= m;++j)
			cin >> a[i][j];
	int cnt = 0,ans = 9999;
	int cnt2 = 0;
	for(int i = 1; i <= n - 2;++i)
		for(int j = i+1;j <= n-1;++j){
					T[++cnt].x = i; T[cnt].y = j;
				}
	for(int i = 1; i <= cnt;++i){
		for(int j = 1; j <= T[i].x;++j)
			for(int k = 1; k <= m;++k)
				if(a[j][k] != 'W')
					cnt2++;
		for(int j = T[i].x + 1; j <= T[i].y;++j)
			for(int k = 1; k <= m;++k)
				if(a[j][k] != 'B')
					cnt2++;
		for(int j = T[i].y + 1; j <= n; ++j)
			for(int k = 1; k <= m;++k)
				if(a[j][k] != 'R')
					cnt2++;
		ans = min(ans,cnt2);
		cnt2 = 0;
}
	cout << ans;
	return 0;
}