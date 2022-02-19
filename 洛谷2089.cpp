#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = max(1,a); i <= min(3,b);++i)
int li[59000][10];
int main() {
	int n = 0;
	int ans = 0;
	cin >> n;
	rep(a,n-27,n-9)
		rep(b,n-24-a,n-a-8)
			rep(c,n-a-b-21,n-a-b-7)
				rep(d,n-a-b-c-18,n-a-b-c-6)
		rep(e,n-a-b-c-d-15,n-a-b-c-d-5)
			rep(f,n-a-b-c-d-e-12,n-a-b-c-d-e-4)
				rep(g,n-a-b-c-d-e-f-9,n-a-b-c-e-f-d-3)
					rep(h,n-a-b-c-d-e-f-g-6,n-a-b-c-d-e-f-g-2)
		rep(i,n-a-b-c-d-e-f-g-h-3,n-a-b-c-d-e-f-g-h-1)
		rep(j, n - a - b - c - d - e - f - g - h - i, n - a - b - c - d - e - f - g - h - i)
	{
		ans++;
		li[ans][0] = a; li[ans][1] = b; li[ans][2] = c; li[ans][3] = d; li[ans][4] = e; li[ans][5] = f; li[ans][6] = g;
		li[ans][7] = h; li[ans][8] = i; li[ans][9] = j;
	}
	if (ans == 0)
	{
		cout << 0;
		return 0;
	}
	cout << ans << endl;
	for (int i = 1; i <= ans; ++i) {
		for (int j = 0; j < 10; ++j)
			cout << li[i][j] << ' ';
		cout << endl;
	}
	return 0;
}