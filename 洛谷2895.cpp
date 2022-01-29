#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int ans[310][310], T[310][310];
struct node {
	int x;
	int y;
};
queue <node> s;
int M, sx, sy, t;
int main() {
	int walk[4][2] = { 0,-1,-1,0,0,1,1,0 }; int flag = 0;
	cin >> M;
	memset(T, 0x7f, sizeof(T));
	for (int i = 0; i < M; ++i) {
		cin >> sx >> sy >> t;
		T[sx][sy] = min(T[sx][sy], t);
		for (int j = 0; j < 4; j++) {
			if(sx+walk[j][0]>=0&&sy+walk[j][1]>=0)
			T[sx + walk[j][0]][sy + walk[j][1]] = min(T[sx + walk[j][0]][sy + walk[j][1]], t);
		}
	}
	if (T[0][0] == 0) {
		cout << -1; return 0;
	}
	memset(ans, -1, sizeof(ans));
	ans[0][0] = 0;
	node tmp = { 0,0 };
	s.push(tmp);
	int nowtime = 1;
	int ux, uy;
	while (!s.empty()) {
		 ux = s.front().x;  uy = s.front().y;
		 if (T[ux][uy] > 1000)
		 {
			 flag = 1; break;
		 }
		for (int i = 0; i < 4; ++i) {
			sx = ux + walk[i][0];
			sy = uy + walk[i][1];
			if (sx >= 0 && sy >= 0 && ans[sx][sy] == -1 && ans[ux][uy] + 1 < T[sx][sy]) {
				tmp = { sx,sy };
				ans[sx][sy] = ans[ux][uy] + 1;
				s.push(tmp);
			}
		}
		s.pop();
	}
	if (flag)
		cout << ans[ux][uy];
	else
		cout << -1;
	return 0;
}