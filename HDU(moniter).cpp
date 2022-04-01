#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 10005;
int m, n, p, q;
struct lcd {
	int x1, y1, x2, y2;
}L[1000005];
int crimer[maxn][maxn];
int sum[maxn][maxn];
void add(int x1, int x2, int y1, int y2, int c) {
	crimer[x1][y1] += c;
	crimer[x1][y2 + 1] -= c;
	crimer[x2 + 1][y1] -= c;
	crimer[x2 + 1][y2 + 1] += c;
}
int main() {
	int sx1, sy1, sx2, sy2, flag = 1;
	cin >> m >> n;
	cin >> p;
	for (int i = 1; i <= p; ++i)
		cin >> L[i].x1 >> L[i].y1 >> L[i].x2 >> L[i].y2;
	cin >> q;
	for (int i = 1; i <= q; ++i) {
		cin >> sx1 >> sy1 >> sx2 >> sy2;
		for (int j = 1; j <= p; ++j)
			add(L[j].x1, L[j].x2, L[j].y1, L[j].y2, -1);
		for (int j = 1; j <= m; ++j)
			for (int k = 1; k <= n; ++k) {
				crimer[j][k] = crimer[j - 1][k] + crimer[j][k - 1] - crimer[j - 1][k - 1] + crimer[j][k];
				if (crimer[j][k] < -1)
					crimer[j][k] = -1;
			}
		add(sx1, sx2, sy1, sy2, 1);
		for (int j = sx1; j <= sx2; ++j) {
			for (int k = sy1; k <= sy2; ++k) {
				sum[j][k] = sum[j - 1][k] + sum[j][k - 1] - sum[j - 1][k - 1] + crimer[j][k];
				if (sum[j][k] > 0) {
					cout << "NO" << endl;
					flag = 0;
					break;
				}
			}
			if (!flag)
				break;
		}
		if (flag)
			cout << "YES" << endl;
		flag = 1;
		memset(crimer, 0, sizeof(crimer));
	}
}