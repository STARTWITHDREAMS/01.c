#include<iostream>
#include<cmath>
using namespace std;
void solve(int x, int y, int sx,int sy,int k) {
	if (k == 0)
		return;
	int midx = sx + pow(2,k-1);
	int midy = sy + pow(2,k-1);
	if (x < midx && y < midy) {
		cout << midx << ' ' << midy << ' ' << 1 << endl;
		solve(midx, midy, midx, midy, k - 1);
		solve(midx-1, midy, sx, midy, k - 1);
		solve(midx, midy-1, midx, sy, k - 1);
		solve(x, y, sx, sy, k - 1);
	}
	else if (x < midx && y >= midy) {
			cout << midx << ' ' << midy - 1 <<' '<< 2 << endl;
			solve(midx - 1, midy - 1, sx, sy, k - 1);
			solve(midx, midy - 1, midx, sy, k - 1);
			solve(midx, midy, midx, midy, k - 1);
			solve(x, y, sx, midy, k - 1);
		}
	else if(x>=midx&&y>=midy){
		cout << midx - 1 << ' ' << midy - 1 << ' ' << 4 << endl;
		solve(midx - 1, midy, sx, midy, k - 1);
		solve(midx - 1, midy - 1, sx, sy, k - 1);
		solve(midx, midy - 1, midx, sy, k - 1);
		solve(x, y, midx, midy, k - 1);

	}
	else if (x >= midx && y < midy) {
		cout << midx - 1 << ' ' << midy << ' ' << 3 << endl;
		solve(midx - 1, midy - 1, sx, sy, k - 1);
		solve(midx - 1, midy, sx, midy, k - 1);
		solve(midx, midy, midx, midy, k - 1);
		solve(x, y, midx, sy, k - 1);
	}
}
int main() {
	int sk, tx, ty;
	cin >> sk >> tx >> ty;
	solve(tx, ty, 1, 1, sk);
	return 0;
}