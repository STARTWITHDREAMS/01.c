#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
struct map {
	int x;
	int y;
};
queue <map> s;
int n, m, sx, sy,cnt;
int main() {
	int a[8][2] = { {-1,-2},{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2} }; int d = 0;
	int ans[405][405];
	cin >> m >> n >> sx >> sy;
	map t = { sx,sy };
	s.push(t); 
	memset(ans, -1, sizeof(ans));
	ans[sx][sy] = 0;
	while (!s.empty()) {
		int ux = s.front().x;		int uy = s.front().y;
		for (int i = 0; i < 8; ++i)
		{
			sx = ux + a[i][0];sy = uy + a[i][1];
			if ( sx > 0 && sx <= m && sy > 0 && sy <= n && ans[sx][sy] == -1)
			{
				t.x = sx; t.y = sy;
				d = ans[ux][uy];
				ans[sx][sy] = d+1;
				s.push(t);
			}
		}
		s.pop();
		d++;
	}
	for (int i = 1; i <= m; ++i) {
		for (int j = 1; j <= n; ++j)
			printf("%-5d", ans[i][j]);
		putchar('\n');
	}
	return 0;
}